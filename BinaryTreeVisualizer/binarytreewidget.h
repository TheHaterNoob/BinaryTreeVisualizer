// binarytreewidget.h
#ifndef BINARYTREEWIDGET_H
#define BINARYTREEWIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QObject>
#include <QMessageBox>
#include "binarytree.h"
#include <QGraphicsItemAnimation>
#include <QTimeLine>

class BinaryTreeWidget : public QWidget {
    Q_OBJECT
public:
    BinaryTreeWidget(QWidget* parent = nullptr);
    void updateTree();
    void clearTree();
    void updateTreeUnicorn();
    BinaryTree binaryTree;
    QGraphicsView* view;
    QGraphicsScene* scene;
    void drawTree(QGraphicsScene* scene, TreeNode* node, QGraphicsEllipseItem* parentEllipse);
    TreeNode* root;
void setRoot(TreeNode* root);
        QTimer *colorTimer;
private:

    void drawTreeUnicorn(QGraphicsScene* scene, TreeNode* node, QGraphicsEllipseItem* parentEllipse);






};

#endif // BINARYTREEWIDGET_H
