/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:04:00 2012
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

#include "sipAPIQtXmlPatterns.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qxmlschema.sip"
#include <qxmlschema.h>
#line 39 "sipQtXmlPatternsQXmlSchema.cpp"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtNetwork/qnetworkaccessmanager.sip"
#include <qnetworkaccessmanager.h>
#line 43 "sipQtXmlPatternsQXmlSchema.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qabstracturiresolver.sip"
#include <qabstracturiresolver.h>
#line 46 "sipQtXmlPatternsQXmlSchema.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qabstractmessagehandler.sip"
#include <qabstractmessagehandler.h>
#line 49 "sipQtXmlPatternsQXmlSchema.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 52 "sipQtXmlPatternsQXmlSchema.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qxmlnamepool.sip"
#include <qxmlnamepool.h>
#line 55 "sipQtXmlPatternsQXmlSchema.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 58 "sipQtXmlPatternsQXmlSchema.cpp"
#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 61 "sipQtXmlPatternsQXmlSchema.cpp"


extern "C" {static PyObject *meth_QXmlSchema_load(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_load(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrl * a0;
        QXmlSchema *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QXmlSchema, &sipCpp, sipType_QUrl, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->load(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        QIODevice * a0;
        const QUrl& a1def = QUrl();
        const QUrl * a1 = &a1def;
        QXmlSchema *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_documentUri,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8|J9", &sipSelf, sipType_QXmlSchema, &sipCpp, sipType_QIODevice, &a0, sipType_QUrl, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->load(a0,*a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QByteArray * a0;
        int a0State = 0;
        const QUrl& a1def = QUrl();
        const QUrl * a1 = &a1def;
        QXmlSchema *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_documentUri,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J9", &sipSelf, sipType_QXmlSchema, &sipCpp, sipType_QByteArray, &a0, &a0State, sipType_QUrl, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->load(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_load, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSchema_isValid(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSchema, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_isValid, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSchema_namePool(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_namePool(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSchema, &sipCpp))
        {
            QXmlNamePool *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlNamePool(sipCpp->namePool());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlNamePool,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_namePool, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSchema_documentUri(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_documentUri(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSchema, &sipCpp))
        {
            QUrl *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl(sipCpp->documentUri());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_documentUri, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSchema_setMessageHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_setMessageHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractMessageHandler * a0;
        PyObject *a0Keep;
        QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlSchema, &sipCpp, &a0Keep, sipType_QAbstractMessageHandler, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMessageHandler(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -5, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_setMessageHandler, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSchema_messageHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_messageHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSchema, &sipCpp))
        {
            QAbstractMessageHandler *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->messageHandler();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QAbstractMessageHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_messageHandler, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSchema_setUriResolver(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_setUriResolver(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAbstractUriResolver * a0;
        PyObject *a0Keep;
        QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlSchema, &sipCpp, &a0Keep, sipType_QAbstractUriResolver, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUriResolver(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -6, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_setUriResolver, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSchema_uriResolver(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_uriResolver(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSchema, &sipCpp))
        {
            const QAbstractUriResolver *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->uriResolver();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast<QAbstractUriResolver *>(sipRes),sipType_QAbstractUriResolver,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_uriResolver, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSchema_setNetworkAccessManager(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_setNetworkAccessManager(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkAccessManager * a0;
        PyObject *a0Keep;
        QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlSchema, &sipCpp, &a0Keep, sipType_QNetworkAccessManager, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setNetworkAccessManager(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -7, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_setNetworkAccessManager, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSchema_networkAccessManager(PyObject *, PyObject *);}
static PyObject *meth_QXmlSchema_networkAccessManager(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlSchema *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSchema, &sipCpp))
        {
            QNetworkAccessManager *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->networkAccessManager();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QNetworkAccessManager,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSchema, sipName_networkAccessManager, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QXmlSchema(void *, const sipTypeDef *);}
static void *cast_QXmlSchema(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QXmlSchema)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlSchema(void *, int);}
static void release_QXmlSchema(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QXmlSchema *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QXmlSchema(sipSimpleWrapper *);}
static void dealloc_QXmlSchema(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlSchema(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QXmlSchema(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QXmlSchema(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QXmlSchema *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlSchema();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlSchema[] = {
    {SIP_MLNAME_CAST(sipName_documentUri), meth_QXmlSchema_documentUri, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QXmlSchema_isValid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_load), (PyCFunction)meth_QXmlSchema_load, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_messageHandler), meth_QXmlSchema_messageHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_namePool), meth_QXmlSchema_namePool, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_networkAccessManager), meth_QXmlSchema_networkAccessManager, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setMessageHandler), meth_QXmlSchema_setMessageHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setNetworkAccessManager), meth_QXmlSchema_setNetworkAccessManager, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setUriResolver), meth_QXmlSchema_setUriResolver, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_uriResolver), meth_QXmlSchema_uriResolver, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtXmlPatterns_QXmlSchema = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QXmlSchema,
        {0}
    },
    {
        sipNameNr_QXmlSchema,
        {0, 0, 1},
        10, methods_QXmlSchema,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QXmlSchema,
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
    dealloc_QXmlSchema,
    0,
    0,
    0,
    release_QXmlSchema,
    cast_QXmlSchema,
    0,
    0,
    0
},
    0,
    0,
    0
};
