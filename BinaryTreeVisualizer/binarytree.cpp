#include "binarytree.h"
#include <QDebug>
BinaryTree::BinaryTree() : root(nullptr) {}

BinaryTree::~BinaryTree() {

}

void BinaryTree::create() {
    root = nullptr;
}

bool BinaryTree::search(int value) const {
    return searchNode(root, value);
}

void BinaryTree::insert(int value) {
    TreeNode* newNode = createNode(value);
    if (!root) {
        root = newNode;
    } else {
        insertNode(root, newNode);
    }

}
TreeNode* BinaryTree::createNode(int value) {
    TreeNode* newNode = new TreeNode;
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

bool BinaryTree::searchNode(TreeNode* currentNode, int value) const {
    if (!currentNode) {
        return false;
    }

    if (currentNode->data == value) {
        return true;
    }

    if (value < currentNode->data) {
        return searchNode(currentNode->left, value);
    }

    return searchNode(currentNode->right, value);
}

void BinaryTree::insertNode(TreeNode* currentNode, TreeNode* newNode) {
    if (newNode->data < currentNode->data) {
        if (!currentNode->left) {
            currentNode->left = newNode;
        } else {
            insertNode(currentNode->left, newNode);
        }
    } else if (newNode->data > currentNode->data) {
        if (!currentNode->right) {
            currentNode->right = newNode;
        } else {
            insertNode(currentNode->right, newNode);
        }
    }
}


TreeNode* BinaryTree::getRoot() const {
    return root;
}
void BinaryTree::calculateNodePositions(TreeNode* node, int level, int posX, int posY) {
    if (!node) return;
//Increible gran algoritmo que hice para que no choquen los nodos (eventualmente chocaran o cruazaran o se daran vuelta :/ )
    int resta=25-level;
    int offsetX;
    if(level<1){
        offsetX=360;
    }else if(level == 1){
        offsetX=150;
    }else if(level>1){
        offsetX = 125 - (resta*level);
    }
    int leftX = posX - offsetX;
    int rightX = posX + offsetX;

    const int offsetY = 100;
    int nextY = posY + offsetY;

    node->x = posX;
    node->y = posY;

    calculateNodePositions(node->left, level + 1, leftX, nextY);
    calculateNodePositions(node->right, level + 1, rightX, nextY);
}
//Esta funcion se llama inicialmente cuando hay que borrar un nodo, y updatea el root
void BinaryTree::deleteValue(int value) {
    root = deleteNode(root, value);
}
//Esta funcion ayuda a borrar el nodo, es una funcion recursiva
TreeNode* BinaryTree::deleteNode(TreeNode* currentNode, int value) {
    if (!currentNode) return currentNode; //Caso base, si el nodo es nulo, retorna.

    if (value < currentNode->data) {
        currentNode->left = deleteNode(currentNode->left, value); //Recursivamente busca y borra en la rama de la izquierda
    } else if (value > currentNode->data) {
        currentNode->right = deleteNode(currentNode->right, value); //Recursivamente busca y borra en la rama de la derecha
    } else {
        //Si se encontro el nodo a borrar
        if (!currentNode->left) {
            //Si no hay nodo a la izquierda
            TreeNode* temp = currentNode->right; //Guarda el nodo de la derecha
            delete currentNode; //borra el nodo actual
            return temp; //retorna el nodo derecho para que sea agregue al padre
        } else if (!currentNode->right) {
            //Si no hay nodo a la derecha
            TreeNode* temp = currentNode->left; //Guarda el nodo de la izquierda
            delete currentNode; //borra el nodo actual
            return temp; //retorna el nodo izquierdo para que se agregue al padre
        }
        //Si el nodo actual tiene ambos
        TreeNode* temp = minValueNode(currentNode->right); //encuentra el valor mas chikito de la rama derecha
        currentNode->data = temp->data; //reemplaza el valor del nodo actual con valor mas chikito de la derecha
        currentNode->right = deleteNode(currentNode->right, temp->data); //borra el nodo mas chikito de la derecha
    }

    return currentNode; //retorna el nodo moficado o el padre
}
TreeNode* BinaryTree::minValueNode(TreeNode* node) {
    TreeNode* current = node;
    while (current && current->left) {
        current = current->left;
    }
    return current;
}


