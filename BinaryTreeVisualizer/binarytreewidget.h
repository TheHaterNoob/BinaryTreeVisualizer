// binarytreewidget.h
#ifndef BINARYTREEWIDGET_H
#define BINARYTREEWIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QObject>
#include <QMessageBox>
#include "binarytree.h"

class BinaryTreeWidget : public QWidget {
    Q_OBJECT
public:
    BinaryTreeWidget(QWidget* parent = nullptr);
    void updateTree();
    void clearTree();
    void updateTreeUnicorn();
    BinaryTree binaryTree;
void setRoot(TreeNode* root);
        QTimer *colorTimer;
private:
    TreeNode* root;
    void drawTreeUnicorn(QGraphicsScene* scene, TreeNode* node, QGraphicsEllipseItem* parentEllipse);
    void drawTree(QGraphicsScene* scene, TreeNode* node, QGraphicsEllipseItem* parentEllipse);
    QGraphicsScene* scene;
    QGraphicsView* view;



};

#endif // BINARYTREEWIDGET_H
