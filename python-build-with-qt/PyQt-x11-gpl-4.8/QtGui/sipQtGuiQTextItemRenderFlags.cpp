/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:17 2012
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

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 39 "sipQtGuiQTextItemRenderFlags.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 43 "sipQtGuiQTextItemRenderFlags.cpp"


extern "C" {static int slot_QTextItem_RenderFlags___bool__(PyObject *);}
static int slot_QTextItem_RenderFlags___bool__(PyObject *sipSelf)
{
    QTextItem::RenderFlags *sipCpp = reinterpret_cast<QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 336 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtGuiQTextItemRenderFlags.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextItem::RenderFlags *sipCpp = reinterpret_cast<QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextItem::RenderFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextItem_RenderFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 331 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtGuiQTextItemRenderFlags.cpp"
            sipReleaseType(const_cast<QTextItem::RenderFlags *>(a0),sipType_QTextItem_RenderFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTextItem_RenderFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextItem::RenderFlags *sipCpp = reinterpret_cast<QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextItem::RenderFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextItem_RenderFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 326 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 125 "sipQtGuiQTextItemRenderFlags.cpp"
            sipReleaseType(const_cast<QTextItem::RenderFlags *>(a0),sipType_QTextItem_RenderFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTextItem_RenderFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___invert__(PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___invert__(PyObject *sipSelf)
{
    QTextItem::RenderFlags *sipCpp = reinterpret_cast<QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QTextItem::RenderFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextItem::RenderFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextItem::RenderFlags * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextItem_RenderFlags, &a0, &a0State, &a1))
        {
            QTextItem::RenderFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextItem::RenderFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextItem_RenderFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextItem::RenderFlags * a0;
        int a0State = 0;
        QTextItem::RenderFlags * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QTextItem_RenderFlags, &a0, &a0State, sipType_QTextItem_RenderFlags, &a1, &a1State))
        {
            QTextItem::RenderFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextItem::RenderFlags((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextItem_RenderFlags,a0State);
            sipReleaseType(a1,sipType_QTextItem_RenderFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,NULL);
        }
    }

    {
        QTextItem::RenderFlags * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextItem_RenderFlags, &a0, &a0State, &a1))
        {
            QTextItem::RenderFlags *sipRes = 0;

#line 320 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new QTextItem::RenderFlags(*a0 ^ a1);
#line 232 "sipQtGuiQTextItemRenderFlags.cpp"
            sipReleaseType(a0,sipType_QTextItem_RenderFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextItem::RenderFlags * a0;
        int a0State = 0;
        QTextItem::RenderFlags * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QTextItem_RenderFlags, &a0, &a0State, sipType_QTextItem_RenderFlags, &a1, &a1State))
        {
            QTextItem::RenderFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextItem::RenderFlags((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextItem_RenderFlags,a0State);
            sipReleaseType(a1,sipType_QTextItem_RenderFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,NULL);
        }
    }

    {
        QTextItem::RenderFlags * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextItem_RenderFlags, &a0, &a0State, &a1))
        {
            QTextItem::RenderFlags *sipRes = 0;

#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new QTextItem::RenderFlags(*a0 | a1);
#line 284 "sipQtGuiQTextItemRenderFlags.cpp"
            sipReleaseType(a0,sipType_QTextItem_RenderFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___int__(PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___int__(PyObject *sipSelf)
{
    QTextItem::RenderFlags *sipCpp = reinterpret_cast<QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextItem_RenderFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextItem::RenderFlags *sipCpp = reinterpret_cast<QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QTextItem::RenderFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextItem_RenderFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextItem::RenderFlags::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextItem_RenderFlags,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextItem_RenderFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextItem::RenderFlags *sipCpp = reinterpret_cast<QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QTextItem::RenderFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextItem_RenderFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextItem::RenderFlags::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextItem_RenderFlags,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextItem_RenderFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextItem::RenderFlags *sipCpp = reinterpret_cast<QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextItem::RenderFlags::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextItem_RenderFlags(void *, const sipTypeDef *);}
static void *cast_QTextItem_RenderFlags(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextItem_RenderFlags)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextItem_RenderFlags(void *, int);}
static void release_QTextItem_RenderFlags(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextItem::RenderFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextItem_RenderFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextItem_RenderFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextItem::RenderFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextItem::RenderFlags *>(sipSrc);
}


extern "C" {static void *array_QTextItem_RenderFlags(SIP_SSIZE_T);}
static void *array_QTextItem_RenderFlags(SIP_SSIZE_T sipNrElem)
{
    return new QTextItem::RenderFlags[sipNrElem];
}


extern "C" {static void *copy_QTextItem_RenderFlags(const void *, SIP_SSIZE_T);}
static void *copy_QTextItem_RenderFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextItem::RenderFlags(reinterpret_cast<const QTextItem::RenderFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextItem_RenderFlags(sipSimpleWrapper *);}
static void dealloc_QTextItem_RenderFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextItem_RenderFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QTextItem_RenderFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QTextItem_RenderFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextItem::RenderFlags *sipCpp = 0;

    {
        const QTextItem::RenderFlags * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QTextItem_RenderFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextItem::RenderFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QTextItem::RenderFlags *>(a0),sipType_QTextItem_RenderFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextItem::RenderFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextItem::RenderFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QTextItem_RenderFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTextItem_RenderFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QTextItem::RenderFlags **sipCppPtr = reinterpret_cast<QTextItem::RenderFlags **>(sipCppPtrV);

#line 341 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QTextItem::RenderFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextItem_RenderFlag)) ||
            sipCanConvertToType(sipPy, sipType_QTextItem_RenderFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextItem_RenderFlag)))
{
    *sipCppPtr = new QTextItem::RenderFlags(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTextItem::RenderFlags *>(sipConvertToType(sipPy, sipType_QTextItem_RenderFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 577 "sipQtGuiQTextItemRenderFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextItem_RenderFlags[] = {
    {(void *)slot_QTextItem_RenderFlags___bool__, bool_slot},
    {(void *)slot_QTextItem_RenderFlags___ne__, ne_slot},
    {(void *)slot_QTextItem_RenderFlags___eq__, eq_slot},
    {(void *)slot_QTextItem_RenderFlags___invert__, invert_slot},
    {(void *)slot_QTextItem_RenderFlags___and__, and_slot},
    {(void *)slot_QTextItem_RenderFlags___xor__, xor_slot},
    {(void *)slot_QTextItem_RenderFlags___or__, or_slot},
    {(void *)slot_QTextItem_RenderFlags___int__, int_slot},
    {(void *)slot_QTextItem_RenderFlags___ixor__, ixor_slot},
    {(void *)slot_QTextItem_RenderFlags___ior__, ior_slot},
    {(void *)slot_QTextItem_RenderFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextItem_RenderFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextItem__RenderFlags,
        {0}
    },
    {
        sipNameNr_RenderFlags,
        {676, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextItem_RenderFlags,
    init_QTextItem_RenderFlags,
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
    dealloc_QTextItem_RenderFlags,
    assign_QTextItem_RenderFlags,
    array_QTextItem_RenderFlags,
    copy_QTextItem_RenderFlags,
    release_QTextItem_RenderFlags,
    cast_QTextItem_RenderFlags,
    convertTo_QTextItem_RenderFlags,
    0,
    0
},
    0,
    1,
    0
};
