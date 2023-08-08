#include "binarytreewidget.h"
#include "searchdialog.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsEllipseItem>
#include <QGraphicsTextItem>
#include <QBrush>
#include <QPen>
#include <QFont>
#include <QVBoxLayout>
#include <QObject>

BinaryTreeWidget::BinaryTreeWidget(QWidget* parent) : QWidget(parent) {

    scene = new QGraphicsScene(this);
    view = new QGraphicsView(scene, this);
    view->setRenderHint(QPainter::Antialiasing);
    binaryTree.create();
    binaryTree.insert(0);
    binaryTree.calculateNodePositions(binaryTree.getRoot(), 0, 600, 50);

    drawTree(scene, binaryTree.getRoot(), nullptr);

    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(view);
}


//aqui se dibuja le arbol
void BinaryTreeWidget::drawTree(QGraphicsScene* scene, TreeNode* node, QGraphicsEllipseItem* parentEllipse) {
    if (!node) return;

    QGraphicsEllipseItem* ellipse = new QGraphicsEllipseItem(-15, -15, 50, 50);
    QBrush brush(QColor(119, 193, 75));
    ellipse->setBrush(brush);

    ellipse->setPen(QPen(Qt::black));
    ellipse->setPos(node->x, node->y);

    QGraphicsTextItem* textItem = new QGraphicsTextItem(QString::number(node->data));
    textItem->setFont(QFont("Tw Cen MT Condensed Extra Bold", 18));
    textItem->setDefaultTextColor(Qt::black);
    textItem->setPos(node->x - 8, node->y - 8);

    if (parentEllipse) {
        QGraphicsLineItem* edge = new QGraphicsLineItem(parentEllipse->x(), parentEllipse->y() + 15,
                                                        ellipse->x(), ellipse->y() - 15);
        scene->addItem(edge);
    }

    scene->addItem(ellipse);
    scene->addItem(textItem);

    drawTree(scene, node->left, ellipse);
    drawTree(scene, node->right, ellipse);

}


void BinaryTreeWidget::updateTree() {
    scene->clear();

    binaryTree.calculateNodePositions(binaryTree.getRoot(), 0, 600, 50);
    drawTree(scene, binaryTree.getRoot(), nullptr);
}


void BinaryTreeWidget::setRoot(TreeNode* root) {
    this->root = root;
}
