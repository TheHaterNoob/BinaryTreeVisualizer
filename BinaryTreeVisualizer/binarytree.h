#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <QObject>
struct TreeNode {
    int data;
    int x;
    int y;
    TreeNode* left;
    TreeNode* right;
};

class BinaryTree {
public:
    BinaryTree();
    ~BinaryTree();

    void create();
    bool search(int value) const;
    void insert(int value);
    TreeNode* getRoot() const;
    void calculateNodePositions(TreeNode* node, int level, int posX, int posY);
    void deleteValue(int value);
signals:
   void valueInserted(int value);
private:
    TreeNode* root;


    TreeNode* createNode(int value);
    void insertNode(TreeNode* currentNode, TreeNode* newNode);
    bool searchNode(TreeNode* currentNode, int value) const;
    TreeNode* deleteNode(TreeNode* currentNode, int value);
    TreeNode* minValueNode(TreeNode* node);
};

#endif // BINARYTREE_H
