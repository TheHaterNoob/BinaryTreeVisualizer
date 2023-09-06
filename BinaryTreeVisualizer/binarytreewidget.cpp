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
#include <QSequentialAnimationGroup>
#include <QColor>
#include <QPropertyAnimation>
#include <QTimer>
QHash<QGraphicsEllipseItem*, QMetaObject::Connection> colorChangeConnections;
BinaryTreeWidget::BinaryTreeWidget(QWidget* parent) : QWidget(parent) {

    scene = new QGraphicsScene(this);
    view = new QGraphicsView(scene, this);
    view->setRenderHint(QPainter::Antialiasing);
    binaryTree.create();
    binaryTree.calculateNodePositionsNormal(binaryTree.getRoot(), 0, 600, 50);
    root = binaryTree.getRoot(); // Set the root node


    drawTree(scene, binaryTree.getRoot(), nullptr);

    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(view);
    colorTimer = new QTimer(this);
    colorTimer->start(100);
    QBrush brush(QColor(66,69,73));
    scene->setBackgroundBrush(brush);
}

void BinaryTreeWidget::drawTreeUnicorn(QGraphicsScene* scene, TreeNode* node, QGraphicsEllipseItem* parentEllipse) {
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

    // Agrega textos para mostrar altura, profundidad y balance
    QGraphicsTextItem* heightText = new QGraphicsTextItem("A: " + QString::number(node->height));
    heightText->setPos(node->x - 8, node->y + 40);
    scene->addItem(heightText);

    QGraphicsTextItem* depthText = new QGraphicsTextItem("P: " + QString::number(node->depth));
    depthText->setPos(node->x - 8, node->y + 60);
    scene->addItem(depthText);

    QGraphicsTextItem* balanceText = new QGraphicsTextItem("B: " + QString::number(node->balance));
    balanceText->setPos(node->x - 8, node->y + 80);
    scene->addItem(balanceText);

    drawTreeUnicorn(scene, node->left, ellipse);
    drawTreeUnicorn(scene, node->right, ellipse);

    QList<QColor> colors = {Qt::red, Qt::darkRed, Qt::yellow, Qt::green, Qt::blue, Qt::darkBlue, Qt::darkMagenta};

        if (colorChangeConnections.contains(ellipse)) {
            disconnect(colorChangeConnections[ellipse]);
        }

        colorChangeConnections[ellipse] = connect(colorTimer, &QTimer::timeout, this, [ellipse, colors]() {
            static int colorIndex = 0;
            ellipse->setBrush(QBrush(colors[colorIndex]));
            colorIndex = (colorIndex + 1) % colors.size();
        });


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

    // Agrega textos para mostrar altura, profundidad y balance
    QGraphicsTextItem* heightText = new QGraphicsTextItem("A: " + QString::number(node->height));
    heightText->setPos(node->x - 8, node->y + 40);
    scene->addItem(heightText);

    QGraphicsTextItem* depthText = new QGraphicsTextItem("P: " + QString::number(node->depth));
    depthText->setPos(node->x - 8, node->y + 60);
    scene->addItem(depthText);

    QGraphicsTextItem* balanceText = new QGraphicsTextItem("B: " + QString::number(node->balance));
    balanceText->setPos(node->x - 8, node->y + 80);
    scene->addItem(balanceText);

    drawTree(scene, node->left, ellipse);
    drawTree(scene, node->right, ellipse);

}

void BinaryTreeWidget::clearTree() {
    scene->clear();
    binaryTree.create(); // Re-crear el árbol vacío
    updateTree(); // Actualizar la visualización
}

void BinaryTreeWidget::updateTree() {
    disconnect(colorTimer, 0, 0, 0);
    scene->clear();

    binaryTree.calculateNodePositionsNormal(binaryTree.getRoot(), 0, 600, 50);
    drawTree(scene, binaryTree.getRoot(), nullptr);
}

void BinaryTreeWidget::updateTreeUnicorn() {
    disconnect(colorTimer, 0, 0, 0);
    scene->clear();

    binaryTree.calculateNodePositionsNormal(binaryTree.getRoot(), 0, 600, 50);
    drawTreeUnicorn(scene, binaryTree.getRoot(), nullptr);
}


void BinaryTreeWidget::setRoot(TreeNode* root) {
    this->root = root;
}
