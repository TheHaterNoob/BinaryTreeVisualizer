#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <QObject>
#include <QPropertyAnimation>
#include <QSequentialAnimationGroup>
#include <QGraphicsScene>
class BinaryTreeWidget;
struct TreeNode {
    int data;
    int x;
    int y;

    int height;    // Nuevo campo para la altura
    int depth;     // Nuevo campo para la profundidad
    int balance;

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
    void loadFromFile(const QString& filePath);
    int getHeight(TreeNode* node) const;
    int getDepth(TreeNode* node) const;
    int getBalance(TreeNode* node) const;
    void insertNodeNormal(int value, TreeNode* parentNode, bool isLeftChild);
    void calculateNodePositionsNormal(TreeNode* node, int level, int posX, int posY);
    bool searchNodeNormal(TreeNode* currentNode, int value) const;
    TreeNode* deleteNodeNormal(TreeNode* currentNode, int value);
    void insertNodesFromUnorderedTree(TreeNode* unorderedNode);
    void traverseAndCollect(TreeNode* currentNode, std::vector<int>& values);
    void buildBSTFromSortedValues(BinaryTreeWidget* widget, const std::vector<int>& values, int left, int right);
    TreeNode* deleteNodeDefault(int value);
    void loadFromFileNormal(const QString& filePath);
    void insertNodeAVL(int value);
    void convertToAVLTree();
    void traverseAndCollectAVL(TreeNode* currentNode, std::vector<int>& values);
    void buildAVLTreeFromSortedValues(BinaryTreeWidget* widget, const std::vector<int>& values, int left, int right);
    void loadFromFileAVL(const QString& filePath);
    void animateConversionToAVLTree( BinaryTreeWidget* widget);
    void animateInsertionFromUnorderedTree(BinaryTreeWidget* widget, TreeNode* unorderedNode);
    QPointF getCurrentNodePosition(TreeNode* node);
      TreeNode* createNode(int value);





private:
    TreeNode* root;
    int calculateHeight(TreeNode* node) const;
    TreeNode* insertNodeAVL(TreeNode* node, int value);
    TreeNode* rotateLeft(TreeNode* node);
    TreeNode* rotateRight(TreeNode* node);


    void insertNode(TreeNode* currentNode, TreeNode* newNode);
    bool searchNode(TreeNode* currentNode, int value) const;
    TreeNode* deleteNode(TreeNode* currentNode, int value);
    TreeNode* minValueNode(TreeNode* node);
};

#endif // BINARYTREE_H
