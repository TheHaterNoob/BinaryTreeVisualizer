#include "1.h"

BinaryTree::BinaryTree() : root(nullptr) {}

BinaryTree::~BinaryTree() {

}

void BinaryTree::create() {
    root = nullptr;
}

bool BinaryTree::search(int value) {
    return searchNode(root, value);
}

void BinaryTree::insert(int value) {
    root = insertNode(root, value);
}

bool BinaryTree::searchNode(TreeNode* node, int value) {
    if (node == nullptr)
        return false;
    if (node->data == value)
        return true;
    if (value < node->data)
        return searchNode(node->left, value);
    return searchNode(node->right, value);
}

TreeNode* BinaryTree::insertNode(TreeNode* node, int value) {
    if (node == nullptr) {
        node = initialize_node(value);
    } else if (value < node->data) {
        node->left = insertNode(node->left, value);
    } else if (value > node->data) {
        node->right = insertNode(node->right, value);
    }
    return node;
}

TreeNode* BinaryTree::initialize_node(int value) {
    TreeNode* new_node = new TreeNode;
    new_node->data = value;
    new_node->left = nullptr;
    new_node->right = nullptr;
    return new_node;
}


