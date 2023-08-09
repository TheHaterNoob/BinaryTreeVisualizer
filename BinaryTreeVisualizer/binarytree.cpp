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
   // valueInserted(value);
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


//Aqui se inserta el nodo
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

    const int offsetX = 50;
    int leftX = posX - offsetX;
    int rightX = posX + offsetX;

    const int offsetY = 100;
    int nextY = posY + offsetY;

    node->x = posX;
    node->y = posY;

    calculateNodePositions(node->left, level + 1, leftX, nextY);
    calculateNodePositions(node->right, level + 1, rightX, nextY);
   // qDebug() << "Value inserted: ";
}
void BinaryTree::deleteValue(int value) {
    root = deleteNode(root, value);
}

TreeNode* BinaryTree::deleteNode(TreeNode* currentNode, int value) {
    if (!currentNode) return currentNode;

    if (value < currentNode->data) {
        currentNode->left = deleteNode(currentNode->left, value);
    } else if (value > currentNode->data) {
        currentNode->right = deleteNode(currentNode->right, value);
    } else {
        if (!currentNode->left) {
            TreeNode* temp = currentNode->right;
            delete currentNode;
            return temp;
        } else if (!currentNode->right) {
            TreeNode* temp = currentNode->left;
            delete currentNode;
            return temp;
        }

        TreeNode* temp = minValueNode(currentNode->right);
        currentNode->data = temp->data;
        currentNode->right = deleteNode(currentNode->right, temp->data);
    }

    return currentNode;
}
TreeNode* BinaryTree::minValueNode(TreeNode* node) {
    TreeNode* current = node;
    while (current && current->left) {
        current = current->left;
    }
    return current;
}
void BinaryTree::valueInserted(int value) {

   // emit valueInserted(value);

    qDebug() << "Value inserted: " << value;
}


