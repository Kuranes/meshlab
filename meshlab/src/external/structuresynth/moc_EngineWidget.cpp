/****************************************************************************
** Meta object code from reading C++ file 'EngineWidget.h'
**
** Created: Sat May 25 16:07:54 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ssynth/SyntopiaCore/GLEngine/EngineWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EngineWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SyntopiaCore__GLEngine__ProgressBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   36,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   36,   36,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SyntopiaCore__GLEngine__ProgressBox[] = {
    "SyntopiaCore::GLEngine::ProgressBox\0"
    "\0startPressed()\0setCanceled()\0"
};

void SyntopiaCore::GLEngine::ProgressBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProgressBox *_t = static_cast<ProgressBox *>(_o);
        switch (_id) {
        case 0: _t->startPressed(); break;
        case 1: _t->setCanceled(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SyntopiaCore::GLEngine::ProgressBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SyntopiaCore::GLEngine::ProgressBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SyntopiaCore__GLEngine__ProgressBox,
      qt_meta_data_SyntopiaCore__GLEngine__ProgressBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SyntopiaCore::GLEngine::ProgressBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SyntopiaCore::GLEngine::ProgressBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SyntopiaCore::GLEngine::ProgressBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SyntopiaCore__GLEngine__ProgressBox))
        return static_cast<void*>(const_cast< ProgressBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int SyntopiaCore::GLEngine::ProgressBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SyntopiaCore::GLEngine::ProgressBox::startPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
