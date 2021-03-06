/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:16 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 39 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qsystemtrayicon.sip"
#include <qsystemtrayicon.h>
#line 39 "sipQtGuiQSystemTrayIcon.cpp"

#line 39 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtGuiQSystemTrayIcon.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 46 "sipQtGuiQSystemTrayIcon.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 49 "sipQtGuiQSystemTrayIcon.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 52 "sipQtGuiQSystemTrayIcon.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 55 "sipQtGuiQSystemTrayIcon.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qmenu.sip"
#include <qmenu.h>
#line 58 "sipQtGuiQSystemTrayIcon.cpp"
#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 61 "sipQtGuiQSystemTrayIcon.cpp"
#line 303 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 64 "sipQtGuiQSystemTrayIcon.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 67 "sipQtGuiQSystemTrayIcon.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 70 "sipQtGuiQSystemTrayIcon.cpp"
#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 73 "sipQtGuiQSystemTrayIcon.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 76 "sipQtGuiQSystemTrayIcon.cpp"
#line 125 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 79 "sipQtGuiQSystemTrayIcon.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 82 "sipQtGuiQSystemTrayIcon.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 85 "sipQtGuiQSystemTrayIcon.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 88 "sipQtGuiQSystemTrayIcon.cpp"


class sipQSystemTrayIcon : public QSystemTrayIcon
{
public:
    sipQSystemTrayIcon(QObject *);
    sipQSystemTrayIcon(const QIcon&,QObject *);
    virtual ~sipQSystemTrayIcon();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    QObject * sipProtect_sender() const;
    int sipProtect_receivers(const char *) const;
    void sipProtectVirt_timerEvent(bool,QTimerEvent *);
    void sipProtectVirt_childEvent(bool,QChildEvent *);
    void sipProtectVirt_customEvent(bool,QEvent *);
    void sipProtectVirt_connectNotify(bool,const char *);
    void sipProtectVirt_disconnectNotify(bool,const char *);
    bool sipProtectVirt_event(bool,QEvent *);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool event(QEvent *);
    bool eventFilter(QObject *,QEvent *);
    void timerEvent(QTimerEvent *);
    void childEvent(QChildEvent *);
    void customEvent(QEvent *);
    void connectNotify(const char *);
    void disconnectNotify(const char *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSystemTrayIcon(const sipQSystemTrayIcon &);
    sipQSystemTrayIcon &operator = (const sipQSystemTrayIcon &);

    char sipPyMethods[7];
};

sipQSystemTrayIcon::sipQSystemTrayIcon(QObject *a0): QSystemTrayIcon(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSystemTrayIcon::sipQSystemTrayIcon(const QIcon& a0,QObject *a1): QSystemTrayIcon(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSystemTrayIcon::~sipQSystemTrayIcon()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQSystemTrayIcon::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QSystemTrayIcon);
}

int sipQSystemTrayIcon::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QSystemTrayIcon::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QSystemTrayIcon,_c,_id,_a);

    return _id;
}

void *sipQSystemTrayIcon::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast && sip_QtGui_qt_metacast(sipPySelf,sipType_QSystemTrayIcon,_clname)) ? this : QSystemTrayIcon::qt_metacast(_clname);
}

bool sipQSystemTrayIcon::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QSystemTrayIcon::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,QEvent *);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState,meth,a0);
}

bool sipQSystemTrayIcon::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState,meth,a0,a1);
}

void sipQSystemTrayIcon::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t,PyObject *,QTimerEvent *);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState,meth,a0);
}

void sipQSystemTrayIcon::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t,PyObject *,QChildEvent *);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState,meth,a0);
}

void sipQSystemTrayIcon::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,QEvent *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState,meth,a0);
}

void sipQSystemTrayIcon::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}

void sipQSystemTrayIcon::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}

QObject * sipQSystemTrayIcon::sipProtect_sender() const
{
    return QObject::sender();
}

int sipQSystemTrayIcon::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipQSystemTrayIcon::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQSystemTrayIcon::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQSystemTrayIcon::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQSystemTrayIcon::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQSystemTrayIcon::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

bool sipQSystemTrayIcon::sipProtectVirt_event(bool sipSelfWasArg,QEvent *a0)
{
    return (sipSelfWasArg ? QSystemTrayIcon::event(a0) : event(a0));
}


extern "C" {static PyObject *meth_QSystemTrayIcon_sender(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_sender(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        sipQSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            QObject *sipRes = 0;

#line 529 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
        typedef QObject *(*helper_func)(QObject *);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_sender");
        
        if (helper)
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            sipRes = helper(sipCpp->sender());
        #else
            sipRes = helper(sipCpp->sipProtect_sender());
        #endif
#line 360 "sipQtGuiQSystemTrayIcon.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_sender, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_receivers(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        char * a0;
        sipQSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, &a0))
        {
            int sipRes = 0;

#line 546 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
        // We need to take into account any proxies for Python signals. Import the
        // helper if it hasn't already been done.
        typedef int (*helper_func)(QObject *, const char *, int);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_receivers");
        
        if (helper)
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            sipRes = helper(sipCpp, a0, sipCpp->receivers(a0));
        #else
            sipRes = helper(sipCpp, a0, sipCpp->sipProtect_receivers(a0));
        #endif
#line 402 "sipQtGuiQSystemTrayIcon.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_receivers, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, sipType_QTimerEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_timerEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, sipType_QChildEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_childEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, sipType_QEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_customEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_connectNotify, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_disconnectNotify, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_setContextMenu(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_setContextMenu(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMenu * a0;
        PyObject *a0Keep;
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, &a0Keep, sipType_QMenu, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setContextMenu(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -60, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_setContextMenu, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_contextMenu(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_contextMenu(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            QMenu *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->contextMenu();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QMenu,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_contextMenu, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_geometry(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_geometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            QRect *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRect(sipCpp->geometry());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_geometry, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_icon(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_icon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            QIcon *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QIcon(sipCpp->icon());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QIcon,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_icon, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_setIcon(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_setIcon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QIcon * a0;
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, sipType_QIcon, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setIcon(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_setIcon, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_toolTip(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_toolTip(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toolTip());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_toolTip, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_setToolTip(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_setToolTip(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setToolTip(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_setToolTip, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_isSystemTrayAvailable(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_isSystemTrayAvailable(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QSystemTrayIcon::isSystemTrayAvailable();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_isSystemTrayAvailable, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_supportsMessages(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_supportsMessages(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QSystemTrayIcon::supportsMessages();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_supportsMessages, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_showMessage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_showMessage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        QSystemTrayIcon::MessageIcon a2 = QSystemTrayIcon::Information;
        int a3 = 10000;
        QSystemTrayIcon *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_icon,
            sipName_msecs,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1J1|Ei", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QSystemTrayIcon_MessageIcon, &a2, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->showMessage(*a0,*a1,a2,a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_showMessage, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_isVisible(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_isVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isVisible();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_isVisible, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_hide(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_hide(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->hide();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_hide, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_setVisible(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_setVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setVisible(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_setVisible, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_show(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_show(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->show();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_show, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemTrayIcon_event(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_event(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, sipType_QEvent, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtectVirt_event(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_event, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSystemTrayIcon(void *, const sipTypeDef *);}
static void *cast_QSystemTrayIcon(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QSystemTrayIcon)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QSystemTrayIcon *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSystemTrayIcon(void *, int);}
static void release_QSystemTrayIcon(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSystemTrayIcon *>(sipCppV);
    else
        delete reinterpret_cast<QSystemTrayIcon *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QSystemTrayIcon(sipSimpleWrapper *);}
static void dealloc_QSystemTrayIcon(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSystemTrayIcon *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSystemTrayIcon(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QSystemTrayIcon(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QSystemTrayIcon(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQSystemTrayIcon *sipCpp = 0;

    {
        QObject * a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
#line 62 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qsystemtrayicon.sip"
        // We want to track the instance.
        
        Py_BEGIN_ALLOW_THREADS
        sipCpp = new sipQSystemTrayIcon(a0);
        qtgui_track(sipCpp);
        Py_END_ALLOW_THREADS
#line 1040 "sipQtGuiQSystemTrayIcon.cpp"

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QIcon * a0;
        QObject * a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|JH", sipType_QIcon, &a0, sipType_QObject, &a1, sipOwner))
        {
#line 72 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qsystemtrayicon.sip"
        // We want to track the instance.
        
        Py_BEGIN_ALLOW_THREADS
        sipCpp = new sipQSystemTrayIcon(*a0, a1);
        qtgui_track(sipCpp);
        Py_END_ALLOW_THREADS
#line 1066 "sipQtGuiQSystemTrayIcon.cpp"

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSystemTrayIcon[] = {{133, 0, 1}};


static PyMethodDef methods_QSystemTrayIcon[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QSystemTrayIcon_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_QSystemTrayIcon_connectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_contextMenu), meth_QSystemTrayIcon_contextMenu, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QSystemTrayIcon_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_QSystemTrayIcon_disconnectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_event), meth_QSystemTrayIcon_event, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_geometry), meth_QSystemTrayIcon_geometry, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hide), meth_QSystemTrayIcon_hide, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_icon), meth_QSystemTrayIcon_icon, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isSystemTrayAvailable), meth_QSystemTrayIcon_isSystemTrayAvailable, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isVisible), meth_QSystemTrayIcon_isVisible, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), meth_QSystemTrayIcon_receivers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_sender), meth_QSystemTrayIcon_sender, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setContextMenu), meth_QSystemTrayIcon_setContextMenu, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setIcon), meth_QSystemTrayIcon_setIcon, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setToolTip), meth_QSystemTrayIcon_setToolTip, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setVisible), meth_QSystemTrayIcon_setVisible, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_show), meth_QSystemTrayIcon_show, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_showMessage), (PyCFunction)meth_QSystemTrayIcon_showMessage, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_supportsMessages), meth_QSystemTrayIcon_supportsMessages, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QSystemTrayIcon_timerEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toolTip), meth_QSystemTrayIcon_toolTip, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QSystemTrayIcon[] = {
    {sipName_Context, QSystemTrayIcon::Context, 617},
    {sipName_Critical, QSystemTrayIcon::Critical, 618},
    {sipName_DoubleClick, QSystemTrayIcon::DoubleClick, 617},
    {sipName_Information, QSystemTrayIcon::Information, 618},
    {sipName_MiddleClick, QSystemTrayIcon::MiddleClick, 617},
    {sipName_NoIcon, QSystemTrayIcon::NoIcon, 618},
    {sipName_Trigger, QSystemTrayIcon::Trigger, 617},
    {sipName_Unknown, QSystemTrayIcon::Unknown, 617},
    {sipName_Warning, QSystemTrayIcon::Warning, 618},
};


/* Define this type's PyQt4 signals. */
static const pyqt4QtSignal pyqt4_signals_QSystemTrayIcon[] = {
    {"messageClicked()", 0, 0},
    {"activated(QSystemTrayIcon::ActivationReason)", 0, 0},
    {0, 0, 0}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QSystemTrayIcon = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QSystemTrayIcon,
        {0}
    },
    {
        sipNameNr_QSystemTrayIcon,
        {0, 0, 1},
        22, methods_QSystemTrayIcon,
        9, enummembers_QSystemTrayIcon,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QSystemTrayIcon,
    0,
    init_QSystemTrayIcon,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QSystemTrayIcon,
    0,
    0,
    0,
    release_QSystemTrayIcon,
    cast_QSystemTrayIcon,
    0,
    0,
    0
},
    &QSystemTrayIcon::staticMetaObject,
    0,
    pyqt4_signals_QSystemTrayIcon
};
