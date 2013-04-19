/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:45 2012
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

#include "sipAPIQtSql.h"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtSql/qsql.sip"
#include <qsql.h>
#line 39 "sipQtSqlQSqlParamType.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtSql/qsql.sip"
#include <qsql.h>
#line 43 "sipQtSqlQSqlParamType.cpp"


extern "C" {static int slot_QSql_ParamType___bool__(PyObject *);}
static int slot_QSql_ParamType___bool__(PyObject *sipSelf)
{
    QSql::ParamType *sipCpp = reinterpret_cast<QSql::ParamType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSql_ParamType));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 336 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtSqlQSqlParamType.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QSql_ParamType___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSql_ParamType___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSql::ParamType *sipCpp = reinterpret_cast<QSql::ParamType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSql_ParamType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSql::ParamType * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSql_ParamType, &a0, &a0State))
        {
            bool sipRes = 0;

#line 331 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtSqlQSqlParamType.cpp"
            sipReleaseType(const_cast<QSql::ParamType *>(a0),sipType_QSql_ParamType,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSql,ne_slot,sipType_QSql_ParamType,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSql_ParamType___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSql_ParamType___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSql::ParamType *sipCpp = reinterpret_cast<QSql::ParamType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSql_ParamType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSql::ParamType * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSql_ParamType, &a0, &a0State))
        {
            bool sipRes = 0;

#line 326 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 125 "sipQtSqlQSqlParamType.cpp"
            sipReleaseType(const_cast<QSql::ParamType *>(a0),sipType_QSql_ParamType,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSql,eq_slot,sipType_QSql_ParamType,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSql_ParamType___invert__(PyObject *);}
static PyObject *slot_QSql_ParamType___invert__(PyObject *sipSelf)
{
    QSql::ParamType *sipCpp = reinterpret_cast<QSql::ParamType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSql_ParamType));

    if (!sipCpp)
        return 0;


    {
        {
            QSql::ParamType *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSql::ParamType(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSql_ParamType,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QSql_ParamType___and__(PyObject *,PyObject *);}
static PyObject *slot_QSql_ParamType___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSql::ParamType * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSql_ParamType, &a0, &a0State, &a1))
        {
            QSql::ParamType *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSql::ParamType((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QSql_ParamType,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSql_ParamType,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSql,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSql_ParamType___xor__(PyObject *,PyObject *);}
static PyObject *slot_QSql_ParamType___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSql::ParamType * a0;
        int a0State = 0;
        QSql::ParamType * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QSql_ParamType, &a0, &a0State, sipType_QSql_ParamType, &a1, &a1State))
        {
            QSql::ParamType *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSql::ParamType((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QSql_ParamType,a0State);
            sipReleaseType(a1,sipType_QSql_ParamType,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSql_ParamType,NULL);
        }
    }

    {
        QSql::ParamType * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSql_ParamType, &a0, &a0State, &a1))
        {
            QSql::ParamType *sipRes = 0;

#line 320 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new QSql::ParamType(*a0 ^ a1);
#line 232 "sipQtSqlQSqlParamType.cpp"
            sipReleaseType(a0,sipType_QSql_ParamType,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSql_ParamType,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSql,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSql_ParamType___or__(PyObject *,PyObject *);}
static PyObject *slot_QSql_ParamType___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSql::ParamType * a0;
        int a0State = 0;
        QSql::ParamType * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QSql_ParamType, &a0, &a0State, sipType_QSql_ParamType, &a1, &a1State))
        {
            QSql::ParamType *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSql::ParamType((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QSql_ParamType,a0State);
            sipReleaseType(a1,sipType_QSql_ParamType,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSql_ParamType,NULL);
        }
    }

    {
        QSql::ParamType * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSql_ParamType, &a0, &a0State, &a1))
        {
            QSql::ParamType *sipRes = 0;

#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new QSql::ParamType(*a0 | a1);
#line 284 "sipQtSqlQSqlParamType.cpp"
            sipReleaseType(a0,sipType_QSql_ParamType,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSql_ParamType,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSql,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSql_ParamType___int__(PyObject *);}
static PyObject *slot_QSql_ParamType___int__(PyObject *sipSelf)
{
    QSql::ParamType *sipCpp = reinterpret_cast<QSql::ParamType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSql_ParamType));

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


extern "C" {static PyObject *slot_QSql_ParamType___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QSql_ParamType___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSql_ParamType)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSql::ParamType *sipCpp = reinterpret_cast<QSql::ParamType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSql_ParamType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QSql::ParamType * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSql_ParamType, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QSql::ParamType::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QSql_ParamType,a0State);

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


extern "C" {static PyObject *slot_QSql_ParamType___ior__(PyObject *,PyObject *);}
static PyObject *slot_QSql_ParamType___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSql_ParamType)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSql::ParamType *sipCpp = reinterpret_cast<QSql::ParamType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSql_ParamType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QSql::ParamType * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSql_ParamType, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QSql::ParamType::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QSql_ParamType,a0State);

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


extern "C" {static PyObject *slot_QSql_ParamType___iand__(PyObject *,PyObject *);}
static PyObject *slot_QSql_ParamType___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSql_ParamType)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSql::ParamType *sipCpp = reinterpret_cast<QSql::ParamType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSql_ParamType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QSql::ParamType::operator&=(a0);
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
extern "C" {static void *cast_QSql_ParamType(void *, const sipTypeDef *);}
static void *cast_QSql_ParamType(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSql_ParamType)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSql_ParamType(void *, int);}
static void release_QSql_ParamType(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QSql::ParamType *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSql_ParamType(void *, SIP_SSIZE_T, const void *);}
static void assign_QSql_ParamType(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSql::ParamType *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSql::ParamType *>(sipSrc);
}


extern "C" {static void *array_QSql_ParamType(SIP_SSIZE_T);}
static void *array_QSql_ParamType(SIP_SSIZE_T sipNrElem)
{
    return new QSql::ParamType[sipNrElem];
}


extern "C" {static void *copy_QSql_ParamType(const void *, SIP_SSIZE_T);}
static void *copy_QSql_ParamType(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSql::ParamType(reinterpret_cast<const QSql::ParamType *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSql_ParamType(sipSimpleWrapper *);}
static void dealloc_QSql_ParamType(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSql_ParamType(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QSql_ParamType(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QSql_ParamType(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSql::ParamType *sipCpp = 0;

    {
        const QSql::ParamType * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QSql_ParamType, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSql::ParamType(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QSql::ParamType *>(a0),sipType_QSql_ParamType,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSql::ParamType(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSql::ParamType();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QSql_ParamType(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSql_ParamType(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QSql::ParamType **sipCppPtr = reinterpret_cast<QSql::ParamType **>(sipCppPtrV);

#line 341 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QSql::ParamType is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSql_ParamTypeFlag)) ||
            sipCanConvertToType(sipPy, sipType_QSql_ParamType, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSql_ParamTypeFlag)))
{
    *sipCppPtr = new QSql::ParamType(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QSql::ParamType *>(sipConvertToType(sipPy, sipType_QSql_ParamType, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 577 "sipQtSqlQSqlParamType.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSql_ParamType[] = {
    {(void *)slot_QSql_ParamType___bool__, bool_slot},
    {(void *)slot_QSql_ParamType___ne__, ne_slot},
    {(void *)slot_QSql_ParamType___eq__, eq_slot},
    {(void *)slot_QSql_ParamType___invert__, invert_slot},
    {(void *)slot_QSql_ParamType___and__, and_slot},
    {(void *)slot_QSql_ParamType___xor__, xor_slot},
    {(void *)slot_QSql_ParamType___or__, or_slot},
    {(void *)slot_QSql_ParamType___int__, int_slot},
    {(void *)slot_QSql_ParamType___ixor__, ixor_slot},
    {(void *)slot_QSql_ParamType___ior__, ior_slot},
    {(void *)slot_QSql_ParamType___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtSql_QSql_ParamType = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSql__ParamType,
        {0}
    },
    {
        sipNameNr_ParamType,
        {0, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSql_ParamType,
    init_QSql_ParamType,
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
    dealloc_QSql_ParamType,
    assign_QSql_ParamType,
    array_QSql_ParamType,
    copy_QSql_ParamType,
    release_QSql_ParamType,
    cast_QSql_ParamType,
    convertTo_QSql_ParamType,
    0,
    0
},
    0,
    1,
    0
};
