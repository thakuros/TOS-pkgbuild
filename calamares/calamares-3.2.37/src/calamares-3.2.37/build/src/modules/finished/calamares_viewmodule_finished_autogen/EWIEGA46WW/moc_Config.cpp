/****************************************************************************
** Meta object code from reading C++ file 'Config.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/modules/finished/Config.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Config.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Config_t {
    QByteArrayData data[20];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Config_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Config_t qt_meta_stringdata_Config = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Config"
QT_MOC_LITERAL(1, 7, 18), // "restartModeChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "RestartMode"
QT_MOC_LITERAL(4, 39, 1), // "m"
QT_MOC_LITERAL(5, 41, 23), // "restartNowWantedChanged"
QT_MOC_LITERAL(6, 65, 1), // "w"
QT_MOC_LITERAL(7, 67, 17), // "setRestartNowMode"
QT_MOC_LITERAL(8, 85, 19), // "setRestartNowWanted"
QT_MOC_LITERAL(9, 105, 9), // "doRestart"
QT_MOC_LITERAL(10, 115, 8), // "doNotify"
QT_MOC_LITERAL(11, 124, 9), // "hasFailed"
QT_MOC_LITERAL(12, 134, 14), // "restartNowMode"
QT_MOC_LITERAL(13, 149, 16), // "restartNowWanted"
QT_MOC_LITERAL(14, 166, 17), // "restartNowCommand"
QT_MOC_LITERAL(15, 184, 16), // "notifyOnFinished"
QT_MOC_LITERAL(16, 201, 5), // "Never"
QT_MOC_LITERAL(17, 207, 20), // "UserDefaultUnchecked"
QT_MOC_LITERAL(18, 228, 18), // "UserDefaultChecked"
QT_MOC_LITERAL(19, 247, 6) // "Always"

    },
    "Config\0restartModeChanged\0\0RestartMode\0"
    "m\0restartNowWantedChanged\0w\0"
    "setRestartNowMode\0setRestartNowWanted\0"
    "doRestart\0doNotify\0hasFailed\0"
    "restartNowMode\0restartNowWanted\0"
    "restartNowCommand\0notifyOnFinished\0"
    "Never\0UserDefaultUnchecked\0"
    "UserDefaultChecked\0Always"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Config[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   66, // properties
       1,   82, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   55,    2, 0x0a /* Public */,
       8,    1,   58,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,
      10,    1,   62,    2, 0x0a /* Public */,
      10,    0,   65,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,

 // properties: name, type, flags
      12, 0x80000000 | 3, 0x0049510b,
      13, QMetaType::Bool, 0x00495103,
      14, QMetaType::QString, 0x00095c01,
      15, QMetaType::Bool, 0x00095c01,

 // properties: notify_signal_id
       0,
       1,
       0,
       0,

 // enums: name, alias, flags, count, data
       3,    3, 0x2,    4,   87,

 // enum data: key, value
      16, uint(Config::RestartMode::Never),
      17, uint(Config::RestartMode::UserDefaultUnchecked),
      18, uint(Config::RestartMode::UserDefaultChecked),
      19, uint(Config::RestartMode::Always),

       0        // eod
};

void Config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Config *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->restartModeChanged((*reinterpret_cast< RestartMode(*)>(_a[1]))); break;
        case 1: _t->restartNowWantedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setRestartNowMode((*reinterpret_cast< RestartMode(*)>(_a[1]))); break;
        case 3: _t->setRestartNowWanted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->doRestart(); break;
        case 5: _t->doNotify((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->doNotify(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Config::*)(RestartMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::restartModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Config::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::restartNowWantedChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Config *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< RestartMode*>(_v) = _t->restartNowMode(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->restartNowWanted(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->restartNowCommand(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->notifyOnFinished(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Config *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRestartNowMode(*reinterpret_cast< RestartMode*>(_v)); break;
        case 1: _t->setRestartNowWanted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Config::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Config.data,
    qt_meta_data_Config,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Config::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Config::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Config.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Config::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Config::restartModeChanged(RestartMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Config::restartNowWantedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
