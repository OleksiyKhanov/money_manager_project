/****************************************************************************
** Meta object code from reading C++ file 'finaccountwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Finance_tracker_project/finaccountwindow.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'finaccountwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFinAccountWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFinAccountWindowENDCLASS = QtMocHelpers::stringData(
    "FinAccountWindow",
    "signalBack",
    "",
    "reqAccData",
    "sendAccData",
    "QList<FinanceAccount>&",
    "data",
    "on_pushButton_back_clicked",
    "on_pushButton_clicked",
    "on_pushButton_saveTransaction_clicked",
    "receiveFinanceAccountList",
    "list",
    "setIndex",
    "i",
    "requestAccountsList",
    "getAccountsList",
    "updateAccountList"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFinAccountWindowENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[17];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[12];
    char stringdata5[23];
    char stringdata6[5];
    char stringdata7[27];
    char stringdata8[22];
    char stringdata9[38];
    char stringdata10[26];
    char stringdata11[5];
    char stringdata12[9];
    char stringdata13[2];
    char stringdata14[20];
    char stringdata15[16];
    char stringdata16[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFinAccountWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFinAccountWindowENDCLASS_t qt_meta_stringdata_CLASSFinAccountWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "FinAccountWindow"
        QT_MOC_LITERAL(17, 10),  // "signalBack"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 10),  // "reqAccData"
        QT_MOC_LITERAL(40, 11),  // "sendAccData"
        QT_MOC_LITERAL(52, 22),  // "QList<FinanceAccount>&"
        QT_MOC_LITERAL(75, 4),  // "data"
        QT_MOC_LITERAL(80, 26),  // "on_pushButton_back_clicked"
        QT_MOC_LITERAL(107, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(129, 37),  // "on_pushButton_saveTransaction..."
        QT_MOC_LITERAL(167, 25),  // "receiveFinanceAccountList"
        QT_MOC_LITERAL(193, 4),  // "list"
        QT_MOC_LITERAL(198, 8),  // "setIndex"
        QT_MOC_LITERAL(207, 1),  // "i"
        QT_MOC_LITERAL(209, 19),  // "requestAccountsList"
        QT_MOC_LITERAL(229, 15),  // "getAccountsList"
        QT_MOC_LITERAL(245, 17)   // "updateAccountList"
    },
    "FinAccountWindow",
    "signalBack",
    "",
    "reqAccData",
    "sendAccData",
    "QList<FinanceAccount>&",
    "data",
    "on_pushButton_back_clicked",
    "on_pushButton_clicked",
    "on_pushButton_saveTransaction_clicked",
    "receiveFinanceAccountList",
    "list",
    "setIndex",
    "i",
    "requestAccountsList",
    "getAccountsList",
    "updateAccountList"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFinAccountWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    0,   81,    2, 0x06,    2 /* Public */,
       4,    1,   82,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   85,    2, 0x08,    5 /* Private */,
       8,    0,   86,    2, 0x08,    6 /* Private */,
       9,    0,   87,    2, 0x08,    7 /* Private */,
      10,    1,   88,    2, 0x0a,    8 /* Public */,
      12,    1,   91,    2, 0x0a,   10 /* Public */,
      14,    0,   94,    2, 0x0a,   12 /* Public */,
      15,    1,   95,    2, 0x0a,   13 /* Public */,
      16,    1,   98,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject FinAccountWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSFinAccountWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFinAccountWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFinAccountWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FinAccountWindow, std::true_type>,
        // method 'signalBack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reqAccData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendAccData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<FinanceAccount> &, std::false_type>,
        // method 'on_pushButton_back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_saveTransaction_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveFinanceAccountList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<FinanceAccount> &, std::false_type>,
        // method 'setIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'requestAccountsList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getAccountsList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<FinanceAccount> &, std::false_type>,
        // method 'updateAccountList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<FinanceAccount> &, std::false_type>
    >,
    nullptr
} };

void FinAccountWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FinAccountWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalBack(); break;
        case 1: _t->reqAccData(); break;
        case 2: _t->sendAccData((*reinterpret_cast< std::add_pointer_t<QList<FinanceAccount>&>>(_a[1]))); break;
        case 3: _t->on_pushButton_back_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_pushButton_saveTransaction_clicked(); break;
        case 6: _t->receiveFinanceAccountList((*reinterpret_cast< std::add_pointer_t<QList<FinanceAccount>&>>(_a[1]))); break;
        case 7: _t->setIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->requestAccountsList(); break;
        case 9: _t->getAccountsList((*reinterpret_cast< std::add_pointer_t<QList<FinanceAccount>&>>(_a[1]))); break;
        case 10: _t->updateAccountList((*reinterpret_cast< std::add_pointer_t<QList<FinanceAccount>&>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FinAccountWindow::*)();
            if (_t _q_method = &FinAccountWindow::signalBack; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FinAccountWindow::*)();
            if (_t _q_method = &FinAccountWindow::reqAccData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FinAccountWindow::*)(QVector<FinanceAccount> & );
            if (_t _q_method = &FinAccountWindow::sendAccData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *FinAccountWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FinAccountWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFinAccountWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FinAccountWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void FinAccountWindow::signalBack()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FinAccountWindow::reqAccData()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FinAccountWindow::sendAccData(QVector<FinanceAccount> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
