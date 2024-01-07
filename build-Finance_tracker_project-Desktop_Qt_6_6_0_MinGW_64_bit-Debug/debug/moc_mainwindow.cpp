/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Finance_tracker_project/mainwindow.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

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
    "getIndex",
    "",
    "i",
    "tempSignal",
    "sendAccountList",
    "QList<FinanceAccount>&",
    "data",
    "on_pushButton_newTransaction_clicked",
    "on_comboBox_2_activated",
    "index",
    "on_pushButton_createZvit_clicked",
    "closeAccountWindow",
    "onAccountData",
    "addAccountData",
    "FinanceAccount&",
    "item",
    "onRequestAccountData",
    "sendListToWindow3",
    "onUpdateNameList"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[40];
    char stringdata0[11];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[11];
    char stringdata5[16];
    char stringdata6[23];
    char stringdata7[5];
    char stringdata8[37];
    char stringdata9[24];
    char stringdata10[6];
    char stringdata11[33];
    char stringdata12[19];
    char stringdata13[14];
    char stringdata14[15];
    char stringdata15[16];
    char stringdata16[5];
    char stringdata17[21];
    char stringdata18[18];
    char stringdata19[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 8),  // "getIndex"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 1),  // "i"
        QT_MOC_LITERAL(23, 10),  // "tempSignal"
        QT_MOC_LITERAL(34, 15),  // "sendAccountList"
        QT_MOC_LITERAL(50, 22),  // "QList<FinanceAccount>&"
        QT_MOC_LITERAL(73, 4),  // "data"
        QT_MOC_LITERAL(78, 36),  // "on_pushButton_newTransaction_..."
        QT_MOC_LITERAL(115, 23),  // "on_comboBox_2_activated"
        QT_MOC_LITERAL(139, 5),  // "index"
        QT_MOC_LITERAL(145, 32),  // "on_pushButton_createZvit_clicked"
        QT_MOC_LITERAL(178, 18),  // "closeAccountWindow"
        QT_MOC_LITERAL(197, 13),  // "onAccountData"
        QT_MOC_LITERAL(211, 14),  // "addAccountData"
        QT_MOC_LITERAL(226, 15),  // "FinanceAccount&"
        QT_MOC_LITERAL(242, 4),  // "item"
        QT_MOC_LITERAL(247, 20),  // "onRequestAccountData"
        QT_MOC_LITERAL(268, 17),  // "sendListToWindow3"
        QT_MOC_LITERAL(286, 16)   // "onUpdateNameList"
    },
    "MainWindow",
    "getIndex",
    "",
    "i",
    "tempSignal",
    "sendAccountList",
    "QList<FinanceAccount>&",
    "data",
    "on_pushButton_newTransaction_clicked",
    "on_comboBox_2_activated",
    "index",
    "on_pushButton_createZvit_clicked",
    "closeAccountWindow",
    "onAccountData",
    "addAccountData",
    "FinanceAccount&",
    "item",
    "onRequestAccountData",
    "sendListToWindow3",
    "onUpdateNameList"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    1 /* Public */,
       4,    0,   89,    2, 0x06,    3 /* Public */,
       5,    1,   90,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   93,    2, 0x08,    6 /* Private */,
       9,    1,   94,    2, 0x08,    7 /* Private */,
      11,    0,   97,    2, 0x08,    9 /* Private */,
      12,    0,   98,    2, 0x0a,   10 /* Public */,
      13,    1,   99,    2, 0x0a,   11 /* Public */,
      14,    1,  102,    2, 0x0a,   13 /* Public */,
      17,    0,  105,    2, 0x0a,   15 /* Public */,
      18,    0,  106,    2, 0x0a,   16 /* Public */,
      19,    0,  107,    2, 0x0a,   17 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 15,   16,
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
        // method 'getIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'tempSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendAccountList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<FinanceAccount> &, std::false_type>,
        // method 'on_pushButton_newTransaction_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_2_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_createZvit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeAccountWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAccountData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<FinanceAccount> &, std::false_type>,
        // method 'addAccountData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<FinanceAccount &, std::false_type>,
        // method 'onRequestAccountData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendListToWindow3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUpdateNameList'
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
        case 0: _t->getIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->tempSignal(); break;
        case 2: _t->sendAccountList((*reinterpret_cast< std::add_pointer_t<QList<FinanceAccount>&>>(_a[1]))); break;
        case 3: _t->on_pushButton_newTransaction_clicked(); break;
        case 4: _t->on_comboBox_2_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_pushButton_createZvit_clicked(); break;
        case 6: _t->closeAccountWindow(); break;
        case 7: _t->onAccountData((*reinterpret_cast< std::add_pointer_t<QList<FinanceAccount>&>>(_a[1]))); break;
        case 8: _t->addAccountData((*reinterpret_cast< std::add_pointer_t<FinanceAccount&>>(_a[1]))); break;
        case 9: _t->onRequestAccountData(); break;
        case 10: _t->sendListToWindow3(); break;
        case 11: _t->onUpdateNameList(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(int );
            if (_t _q_method = &MainWindow::getIndex; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::tempSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QVector<FinanceAccount> & );
            if (_t _q_method = &MainWindow::sendAccountList; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::getIndex(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::tempSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::sendAccountList(QVector<FinanceAccount> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
