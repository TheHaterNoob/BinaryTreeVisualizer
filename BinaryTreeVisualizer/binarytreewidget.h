// binarytreewidget.h
#ifndef BINARYTREEWIDGET_H
#define BINARYTREEWIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QObject>
#include "binarytree.h"

class BinaryTreeWidget : public QWidget {
    Q_OBJECT
public:
    BinaryTreeWidget(QWidget* parent = nullptr);
    void updateTree();

    BinaryTree binaryTree;
void setRoot(TreeNode* root);
private:
    TreeNode* root;

    void drawTree(QGraphicsScene* scene, TreeNode* node, QGraphicsEllipseItem* parentEllipse);

    QGraphicsScene* scene;
    QGraphicsView* view;
};

#endif // BINARYTREEWIDGET_H
