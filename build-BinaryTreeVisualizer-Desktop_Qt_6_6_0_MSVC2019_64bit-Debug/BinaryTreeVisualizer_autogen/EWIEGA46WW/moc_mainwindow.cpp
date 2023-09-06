/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../BinaryTreeVisualizer/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_pushButton_3_clicked",
    "",
    "showCustomDialog",
    "showCustomDialog2",
    "showDeleteDialog",
    "handleDeleteResult",
    "pudo",
    "handleIntValueSelectedHead",
    "value",
    "handleIntValueSelectedNode2",
    "TreeNode*",
    "parentNode",
    "isLeftChild",
    "handleIntValueSelectedNode",
    "updateTreeBasedOnUnicornio",
    "handleSearchResult",
    "found",
    "fillParentComboBox",
    "QComboBox*",
    "comboBox",
    "node",
    "prefix",
    "on_pushButton_2_clicked",
    "on_pushButton_clicked",
    "on_pushButton_4_clicked",
    "on_Guardar_clicked",
    "on_actionYEP_triggered",
    "on_actionAbrir_Arbol_triggered",
    "on_pushButton_5_clicked",
    "on_openButton_clicked",
    "on_limpiar_clicked",
    "on_actionConvert_to_BST_triggered",
    "on_actionConvert_to_Binary_disorder_triggered",
    "on_actionConvert_to_AVL_triggered",
    "on_actionTwilight_Sparkle_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[72];
    char stringdata0[11];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[18];
    char stringdata5[17];
    char stringdata6[19];
    char stringdata7[5];
    char stringdata8[27];
    char stringdata9[6];
    char stringdata10[28];
    char stringdata11[10];
    char stringdata12[11];
    char stringdata13[12];
    char stringdata14[27];
    char stringdata15[27];
    char stringdata16[19];
    char stringdata17[6];
    char stringdata18[19];
    char stringdata19[11];
    char stringdata20[9];
    char stringdata21[5];
    char stringdata22[7];
    char stringdata23[24];
    char stringdata24[22];
    char stringdata25[24];
    char stringdata26[19];
    char stringdata27[23];
    char stringdata28[31];
    char stringdata29[24];
    char stringdata30[22];
    char stringdata31[19];
    char stringdata32[34];
    char stringdata33[46];
    char stringdata34[34];
    char stringdata35[36];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 23),  // "on_pushButton_3_clicked"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 16),  // "showCustomDialog"
        QT_MOC_LITERAL(53, 17),  // "showCustomDialog2"
        QT_MOC_LITERAL(71, 16),  // "showDeleteDialog"
        QT_MOC_LITERAL(88, 18),  // "handleDeleteResult"
        QT_MOC_LITERAL(107, 4),  // "pudo"
        QT_MOC_LITERAL(112, 26),  // "handleIntValueSelectedHead"
        QT_MOC_LITERAL(139, 5),  // "value"
        QT_MOC_LITERAL(145, 27),  // "handleIntValueSelectedNode2"
        QT_MOC_LITERAL(173, 9),  // "TreeNode*"
        QT_MOC_LITERAL(183, 10),  // "parentNode"
        QT_MOC_LITERAL(194, 11),  // "isLeftChild"
        QT_MOC_LITERAL(206, 26),  // "handleIntValueSelectedNode"
        QT_MOC_LITERAL(233, 26),  // "updateTreeBasedOnUnicornio"
        QT_MOC_LITERAL(260, 18),  // "handleSearchResult"
        QT_MOC_LITERAL(279, 5),  // "found"
        QT_MOC_LITERAL(285, 18),  // "fillParentComboBox"
        QT_MOC_LITERAL(304, 10),  // "QComboBox*"
        QT_MOC_LITERAL(315, 8),  // "comboBox"
        QT_MOC_LITERAL(324, 4),  // "node"
        QT_MOC_LITERAL(329, 6),  // "prefix"
        QT_MOC_LITERAL(336, 23),  // "on_pushButton_2_clicked"
        QT_MOC_LITERAL(360, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(382, 23),  // "on_pushButton_4_clicked"
        QT_MOC_LITERAL(406, 18),  // "on_Guardar_clicked"
        QT_MOC_LITERAL(425, 22),  // "on_actionYEP_triggered"
        QT_MOC_LITERAL(448, 30),  // "on_actionAbrir_Arbol_triggered"
        QT_MOC_LITERAL(479, 23),  // "on_pushButton_5_clicked"
        QT_MOC_LITERAL(503, 21),  // "on_openButton_clicked"
        QT_MOC_LITERAL(525, 18),  // "on_limpiar_clicked"
        QT_MOC_LITERAL(544, 33),  // "on_actionConvert_to_BST_trigg..."
        QT_MOC_LITERAL(578, 45),  // "on_actionConvert_to_Binary_di..."
        QT_MOC_LITERAL(624, 33),  // "on_actionConvert_to_AVL_trigg..."
        QT_MOC_LITERAL(658, 35)   // "on_actionTwilight_Sparkle_tri..."
    },
    "MainWindow",
    "on_pushButton_3_clicked",
    "",
    "showCustomDialog",
    "showCustomDialog2",
    "showDeleteDialog",
    "handleDeleteResult",
    "pudo",
    "handleIntValueSelectedHead",
    "value",
    "handleIntValueSelectedNode2",
    "TreeNode*",
    "parentNode",
    "isLeftChild",
    "handleIntValueSelectedNode",
    "updateTreeBasedOnUnicornio",
    "handleSearchResult",
    "found",
    "fillParentComboBox",
    "QComboBox*",
    "comboBox",
    "node",
    "prefix",
    "on_pushButton_2_clicked",
    "on_pushButton_clicked",
    "on_pushButton_4_clicked",
    "on_Guardar_clicked",
    "on_actionYEP_triggered",
    "on_actionAbrir_Arbol_triggered",
    "on_pushButton_5_clicked",
    "on_openButton_clicked",
    "on_limpiar_clicked",
    "on_actionConvert_to_BST_triggered",
    "on_actionConvert_to_Binary_disorder_triggered",
    "on_actionConvert_to_AVL_triggered",
    "on_actionTwilight_Sparkle_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  158,    2, 0x08,    1 /* Private */,
       3,    0,  159,    2, 0x08,    2 /* Private */,
       4,    0,  160,    2, 0x08,    3 /* Private */,
       5,    0,  161,    2, 0x08,    4 /* Private */,
       6,    1,  162,    2, 0x08,    5 /* Private */,
       8,    1,  165,    2, 0x08,    7 /* Private */,
      10,    3,  168,    2, 0x08,    9 /* Private */,
      14,    1,  175,    2, 0x08,   13 /* Private */,
      15,    0,  178,    2, 0x08,   15 /* Private */,
      16,    1,  179,    2, 0x08,   16 /* Private */,
      18,    3,  182,    2, 0x08,   18 /* Private */,
      23,    0,  189,    2, 0x08,   22 /* Private */,
      24,    0,  190,    2, 0x08,   23 /* Private */,
      25,    0,  191,    2, 0x08,   24 /* Private */,
      26,    0,  192,    2, 0x08,   25 /* Private */,
      27,    0,  193,    2, 0x08,   26 /* Private */,
      28,    0,  194,    2, 0x08,   27 /* Private */,
      29,    0,  195,    2, 0x08,   28 /* Private */,
      30,    0,  196,    2, 0x08,   29 /* Private */,
      31,    0,  197,    2, 0x08,   30 /* Private */,
      32,    0,  198,    2, 0x08,   31 /* Private */,
      33,    0,  199,    2, 0x08,   32 /* Private */,
      34,    0,  200,    2, 0x08,   33 /* Private */,
      35,    0,  201,    2, 0x08,   34 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11, QMetaType::Bool,    9,   12,   13,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 11, QMetaType::QString,   20,   21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_pushButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showCustomDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showCustomDialog2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showDeleteDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleDeleteResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'handleIntValueSelectedHead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'handleIntValueSelectedNode2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeNode *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'handleIntValueSelectedNode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateTreeBasedOnUnicornio'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleSearchResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'fillParentComboBox'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QComboBox *, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeNode *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Guardar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionYEP_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAbrir_Arbol_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_openButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_limpiar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionConvert_to_BST_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionConvert_to_Binary_disorder_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionConvert_to_AVL_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionTwilight_Sparkle_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_3_clicked(); break;
        case 1: _t->showCustomDialog(); break;
        case 2: _t->showCustomDialog2(); break;
        case 3: _t->showDeleteDialog(); break;
        case 4: _t->handleDeleteResult((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->handleIntValueSelectedHead((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->handleIntValueSelectedNode2((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<TreeNode*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 7: _t->handleIntValueSelectedNode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->updateTreeBasedOnUnicornio(); break;
        case 9: _t->handleSearchResult((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->fillParentComboBox((*reinterpret_cast< std::add_pointer_t<QComboBox*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<TreeNode*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 11: _t->on_pushButton_2_clicked(); break;
        case 12: _t->on_pushButton_clicked(); break;
        case 13: _t->on_pushButton_4_clicked(); break;
        case 14: _t->on_Guardar_clicked(); break;
        case 15: _t->on_actionYEP_triggered(); break;
        case 16: _t->on_actionAbrir_Arbol_triggered(); break;
        case 17: _t->on_pushButton_5_clicked(); break;
        case 18: _t->on_openButton_clicked(); break;
        case 19: _t->on_limpiar_clicked(); break;
        case 20: _t->on_actionConvert_to_BST_triggered(); break;
        case 21: _t->on_actionConvert_to_Binary_disorder_triggered(); break;
        case 22: _t->on_actionConvert_to_AVL_triggered(); break;
        case 23: _t->on_actionTwilight_Sparkle_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QComboBox* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
QT_WARNING_POP
