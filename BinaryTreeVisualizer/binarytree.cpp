#include "binarytree.h"
#include <QDebug>
#include <fstream>
#include <queue>
#include <stack>


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
    newNode->balance=0;
    newNode->height=0;
    newNode->depth=0;
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
    } else {
        // Value already exists, show a warning
        qDebug() << "Value already exists in the tree!";
    }

}

void BinaryTree::insertNodeNormal(int value, TreeNode* parentNode, bool isLeftChild) {
    if (!parentNode) {
        qDebug() << "PAIN";
        return;
    }

    if (isLeftChild) {
        if (!parentNode->left) {
            TreeNode* newNode = createNode(value);
            parentNode->left = newNode;
        } else {
            insertNodeNormal(value, parentNode->left, true);
        }
    } else {
        if (!parentNode->right) {
            TreeNode* newNode = createNode(value);
            parentNode->right = newNode;
        } else {
            insertNodeNormal(value, parentNode->right, false);
        }
    }
}

int BinaryTree::getHeight(TreeNode* node) const {
    if (!node) return -1;
    return calculateHeight(node);
}

int BinaryTree::getDepth(TreeNode* node) const {
    if (!node) return -1;

    TreeNode* current = root;
    int depth = 0;

    std::queue<TreeNode*> nodesQueue;
    nodesQueue.push(current);

    while (!nodesQueue.empty()) {
        int levelSize = nodesQueue.size();

        for (int i = 0; i < levelSize; ++i) {
            TreeNode* currentNode = nodesQueue.front();
            nodesQueue.pop();

            if (currentNode == node) {
                return depth;
            }

            if (currentNode->left) {
                nodesQueue.push(currentNode->left);
            }

            if (currentNode->right) {
                nodesQueue.push(currentNode->right);
            }
        }

        depth++;
    }

    // Node not found
    return -1;
}

int BinaryTree::getBalance(TreeNode* node) const {
    if (!node) return 0;
    int leftHeight = calculateHeight(node->left);
    int rightHeight = calculateHeight(node->right);
    return leftHeight - rightHeight;
}

int BinaryTree::calculateHeight(TreeNode* node) const {
    if (!node) return -1;
    int leftHeight = calculateHeight(node->left);
    int rightHeight = calculateHeight(node->right);
    return std::max(leftHeight, rightHeight) + 1;
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
    node->height = getHeight(node);          // Calcula y asigna la altura del nodo
    node->depth = getDepth(node);            // Calcula y asigna la profundidad del nodo
    node->balance = getBalance(node);

    calculateNodePositions(node->left, level + 1, leftX, nextY);
    calculateNodePositions(node->right, level + 1, rightX, nextY);

}

void BinaryTree::calculateNodePositionsNormal(TreeNode* node, int level, int posX, int posY) {
    if (!node) return;
    int resta = 25 - level;
    int offsetX;

    if (level < 1) {
        offsetX = 360;
    } else if (level == 1) {
        offsetX = 150;
    } else if (level > 1) {
        offsetX = 125 - (resta * level);
    }

    int leftX = posX - offsetX;
    int rightX = posX + offsetX;
    const int offsetY = 100;
    int nextY = posY + offsetY;

    node->x = posX;
    node->y = posY;
    node->height = getHeight(node);
    node->depth = getDepth(node);
    node->balance = getBalance(node);

    calculateNodePositionsNormal(node->left, level + 1, leftX, nextY);
    calculateNodePositionsNormal(node->right, level + 1, rightX, nextY);
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

void BinaryTree::loadFromFile(const QString& filePath) {
    std::ifstream inFile(filePath.toStdString());
    if (!inFile.is_open()) {
        qDebug() << "Error: Could not open file for loading.";
        return;
    }
    this->create();

    std::string valueStr;

    while (std::getline(inFile, valueStr)) {
        if (valueStr == "null") {
            continue;
        }else{
            int value= std::stoi(valueStr);
        insert(value);
            continue;
        }
    }

    inFile.close();
}
void BinaryTree::loadFromFileAVL(const QString& filePath) {
    std::ifstream inFile(filePath.toStdString());
    if (!inFile.is_open()) {
        qDebug() << "Error: Could not open file for loading.";
        return;
    }
    this->create();

    std::string valueStr;

    while (std::getline(inFile, valueStr)) {
        if (valueStr == "null") {
            continue;
        }else{
            int value= std::stoi(valueStr);
            insertNodeAVL(value);
            continue;
        }
    }

    inFile.close();
}
void BinaryTree::loadFromFileNormal(const QString& filePath) {
    std::ifstream inFile(filePath.toStdString());
    if (!inFile.is_open()) {
        qDebug() << "Error: Could not open file for loading.";
        return;
    }

    this->create();

    std::string valueStr;
    std::stack<TreeNode*> nodeStack;
    bool isLeftChild = true;

    while (std::getline(inFile, valueStr)) {
        if (valueStr == "null") {
            if (isLeftChild) {
                isLeftChild = false;
            } else {
                if (!nodeStack.empty()) {
                    nodeStack.pop();
                }
                if (!nodeStack.empty()) {
                    isLeftChild = false;
                }
            }
            continue;
        }

        int value = std::stoi(valueStr);
        TreeNode* newNode = createNode(value);
        if (nodeStack.empty()) {
            root = newNode;
        } else {
            if (isLeftChild) {
                nodeStack.top()->left = newNode;
            } else {
                nodeStack.top()->right = newNode;
                nodeStack.pop();
            }
        }
        nodeStack.push(newNode);
        isLeftChild = true;
    }

    inFile.close();
}
bool BinaryTree::searchNodeNormal(TreeNode* currentNode, int value) const {
    if (!currentNode) {
        return false;
    }

    if (currentNode->data == value) {
        return true;
    }

    bool foundInLeftSubtree = searchNode(currentNode->left, value);
    bool foundInRightSubtree = searchNode(currentNode->right, value);

    return foundInLeftSubtree || foundInRightSubtree;
}
TreeNode* BinaryTree::deleteNodeNormal(TreeNode* currentNode, int value) {
    if (!currentNode) return currentNode;

    if (value == currentNode->data) {
        if (!currentNode->left && !currentNode->right) {
            delete currentNode;
            return nullptr;
        } else if (!currentNode->left) {
            TreeNode* temp = currentNode->right;
            delete currentNode;
            return temp;
        } else if (!currentNode->right) {
            TreeNode* temp = currentNode->left;
            delete currentNode;
            return temp;
        } else {
            TreeNode* temp = minValueNode(currentNode->right);
            currentNode->data = temp->data;
            currentNode->right = deleteNodeNormal(currentNode->right, temp->data);
        }
    } else if (value < currentNode->data) {
        currentNode->left = deleteNodeNormal(currentNode->left, value);
    } else {
        currentNode->right = deleteNodeNormal(currentNode->right, value);
    }

    return currentNode;
}


TreeNode* BinaryTree::deleteNodeDefault(int value) {
    if (root == nullptr) return nullptr;
    if (root->data == value) {
        TreeNode* newRoot = root->left ? root->left : root->right;
        delete root;
        root = newRoot;
        return root;
    }
    root = deleteNodeNormal(root, value);
    return root;
}
void BinaryTree::insertNodesFromUnorderedTree(TreeNode* unorderedNode) {
    if (unorderedNode) {
        std::vector<int> values;


        traverseAndCollect(unorderedNode, values);

        std::sort(values.begin(), values.end());

        root = nullptr;

        buildBSTFromSortedValues(values, 0, values.size() - 1);

    }
}

void BinaryTree::traverseAndCollect(TreeNode* currentNode, std::vector<int>& values) {
    if (currentNode) {
        traverseAndCollect(currentNode->left, values);
        values.push_back(currentNode->data);
        traverseAndCollect(currentNode->right, values);
    }
}

void BinaryTree::buildBSTFromSortedValues(const std::vector<int>& values, int left, int right) {
    if (left > right) {
        return;
    }

    int mid = left + (right - left) / 2;
    insert(values[mid]);

    buildBSTFromSortedValues(values, left, mid - 1);
    buildBSTFromSortedValues(values, mid + 1, right);
}

void BinaryTree::insertNodeAVL(int value) {
    root = insertNodeAVL(root, value);
}
TreeNode* BinaryTree::insertNodeAVL(TreeNode* node, int value) {
    if (!node) {
        return createNode(value);
    }

    if (value < node->data) {
        node->left = insertNodeAVL(node->left, value);
    } else if (value > node->data) {
        node->right = insertNodeAVL(node->right, value);
    } else {
        return node;
    }
    node->height = 1 + std::max(getHeight(node->left), getHeight(node->right));

    int balance = getBalance(node);

    if (balance > 1) {
        if (value < node->left->data) {
            return rotateRight(node);
        } else {
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }
    }

    if (balance < -1) {
        if (value > node->right->data) {
            return rotateLeft(node);
        } else {
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }
    }

    return node;
}
TreeNode* BinaryTree::rotateLeft(TreeNode* node) {
    TreeNode* newRoot = node->right;
    TreeNode* newRootLeft = newRoot->left;
    newRoot->left = node;
    node->right = newRootLeft;

    node->height = 1 + std::max(getHeight(node->left), getHeight(node->right));
    newRoot->height = 1 + std::max(getHeight(newRoot->left), getHeight(newRoot->right));

    return newRoot;
}

TreeNode* BinaryTree::rotateRight(TreeNode* node) {
    TreeNode* newRoot = node->left;
    TreeNode* newRootRight = newRoot->right;
    newRoot->right = node;
    node->left = newRootRight;


    node->height = 1 + std::max(getHeight(node->left), getHeight(node->right));
    newRoot->height = 1 + std::max(getHeight(newRoot->left), getHeight(newRoot->right));

    return newRoot;
}
void BinaryTree::convertToAVLTree() {
    std::vector<int> values;

    traverseAndCollect(root, values);

    std::sort(values.begin(), values.end());

    root = nullptr;

    buildAVLTreeFromSortedValues(values, 0, values.size() - 1);
}

void BinaryTree::traverseAndCollectAVL(TreeNode* currentNode, std::vector<int>& values) {
    if (currentNode) {
        traverseAndCollect(currentNode->left, values);
        values.push_back(currentNode->data);
        traverseAndCollect(currentNode->right, values);
    }
}

void BinaryTree::buildAVLTreeFromSortedValues(const std::vector<int>& values, int left, int right) {
    if (left > right) {
        return;
    }

    int mid = left + (right - left) / 2;
    insertNodeAVL(values[mid]);

    buildAVLTreeFromSortedValues(values, left, mid - 1);
    buildAVLTreeFromSortedValues(values, mid + 1, right);
}




