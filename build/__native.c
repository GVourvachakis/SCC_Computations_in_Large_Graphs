#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "float_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "__native.h"
#include "__native_internal.h"

static PyObject *kosaraju_scc_env_setup(PyTypeObject *type);
PyObject *CPyDef_kosaraju_scc_env(void);

static PyObject *
kosaraju_scc_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_kosaraju_scc_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return kosaraju_scc_env_setup(type);
}

static int
kosaraju_scc_env_traverse(scc_algo___kosaraju_scc_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_graph);
    Py_VISIT(self->_finish_stack);
    Py_VISIT(self->_reversed_graph);
    Py_VISIT(self->_visited);
    Py_VISIT(self->_dfs_finish_time);
    Py_VISIT(self->_dfs_collect_scc_size);
    Py_VISIT(self->_node);
    Py_VISIT(self->_scc_sizes);
    return 0;
}

static int
kosaraju_scc_env_clear(scc_algo___kosaraju_scc_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_graph);
    Py_CLEAR(self->_finish_stack);
    Py_CLEAR(self->_reversed_graph);
    Py_CLEAR(self->_visited);
    Py_CLEAR(self->_dfs_finish_time);
    Py_CLEAR(self->_dfs_collect_scc_size);
    Py_CLEAR(self->_node);
    Py_CLEAR(self->_scc_sizes);
    return 0;
}

static void
kosaraju_scc_env_dealloc(scc_algo___kosaraju_scc_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, kosaraju_scc_env_dealloc)
    kosaraju_scc_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem kosaraju_scc_env_vtable[1];
static bool
CPyDef_kosaraju_scc_env_trait_vtable_setup(void)
{
    CPyVTableItem kosaraju_scc_env_vtable_scratch[] = {
        NULL
    };
    memcpy(kosaraju_scc_env_vtable, kosaraju_scc_env_vtable_scratch, sizeof(kosaraju_scc_env_vtable));
    return 1;
}

static PyMethodDef kosaraju_scc_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_kosaraju_scc_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "kosaraju_scc_env",
    .tp_new = kosaraju_scc_env_new,
    .tp_dealloc = (destructor)kosaraju_scc_env_dealloc,
    .tp_traverse = (traverseproc)kosaraju_scc_env_traverse,
    .tp_clear = (inquiry)kosaraju_scc_env_clear,
    .tp_methods = kosaraju_scc_env_methods,
    .tp_basicsize = sizeof(scc_algo___kosaraju_scc_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_kosaraju_scc_env_template = &CPyType_kosaraju_scc_env_template_;

static PyObject *
kosaraju_scc_env_setup(PyTypeObject *type)
{
    scc_algo___kosaraju_scc_envObject *self;
    self = (scc_algo___kosaraju_scc_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = kosaraju_scc_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_kosaraju_scc_env(void)
{
    PyObject *self = kosaraju_scc_env_setup(CPyType_kosaraju_scc_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__dfs_finish_time_kosaraju_scc_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_dfs_finish_time_kosaraju_scc_obj_____get__(self, instance, owner);
}
PyMemberDef dfs_finish_time_kosaraju_scc_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(scc_algo___dfs_finish_time_kosaraju_scc_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(scc_algo___dfs_finish_time_kosaraju_scc_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *dfs_finish_time_kosaraju_scc_obj_setup(PyTypeObject *type);
PyObject *CPyDef_dfs_finish_time_kosaraju_scc_obj(void);

static PyObject *
dfs_finish_time_kosaraju_scc_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dfs_finish_time_kosaraju_scc_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return dfs_finish_time_kosaraju_scc_obj_setup(type);
}

static int
dfs_finish_time_kosaraju_scc_obj_traverse(scc_algo___dfs_finish_time_kosaraju_scc_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(scc_algo___dfs_finish_time_kosaraju_scc_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(scc_algo___dfs_finish_time_kosaraju_scc_objObject))));
    return 0;
}

static int
dfs_finish_time_kosaraju_scc_obj_clear(scc_algo___dfs_finish_time_kosaraju_scc_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(scc_algo___dfs_finish_time_kosaraju_scc_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(scc_algo___dfs_finish_time_kosaraju_scc_objObject))));
    return 0;
}

static void
dfs_finish_time_kosaraju_scc_obj_dealloc(scc_algo___dfs_finish_time_kosaraju_scc_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dfs_finish_time_kosaraju_scc_obj_dealloc)
    dfs_finish_time_kosaraju_scc_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dfs_finish_time_kosaraju_scc_obj_vtable[2];
static bool
CPyDef_dfs_finish_time_kosaraju_scc_obj_trait_vtable_setup(void)
{
    CPyVTableItem dfs_finish_time_kosaraju_scc_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dfs_finish_time_kosaraju_scc_obj_____call__,
        (CPyVTableItem)CPyDef_dfs_finish_time_kosaraju_scc_obj_____get__,
    };
    memcpy(dfs_finish_time_kosaraju_scc_obj_vtable, dfs_finish_time_kosaraju_scc_obj_vtable_scratch, sizeof(dfs_finish_time_kosaraju_scc_obj_vtable));
    return 1;
}

static PyObject *
dfs_finish_time_kosaraju_scc_obj_get___3_mypyc_env__(scc_algo___dfs_finish_time_kosaraju_scc_objObject *self, void *closure);
static int
dfs_finish_time_kosaraju_scc_obj_set___3_mypyc_env__(scc_algo___dfs_finish_time_kosaraju_scc_objObject *self, PyObject *value, void *closure);

static PyGetSetDef dfs_finish_time_kosaraju_scc_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)dfs_finish_time_kosaraju_scc_obj_get___3_mypyc_env__, (setter)dfs_finish_time_kosaraju_scc_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef dfs_finish_time_kosaraju_scc_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_dfs_finish_time_kosaraju_scc_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_dfs_finish_time_kosaraju_scc_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dfs_finish_time_kosaraju_scc_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "dfs_finish_time_kosaraju_scc_obj",
    .tp_new = dfs_finish_time_kosaraju_scc_obj_new,
    .tp_dealloc = (destructor)dfs_finish_time_kosaraju_scc_obj_dealloc,
    .tp_traverse = (traverseproc)dfs_finish_time_kosaraju_scc_obj_traverse,
    .tp_clear = (inquiry)dfs_finish_time_kosaraju_scc_obj_clear,
    .tp_getset = dfs_finish_time_kosaraju_scc_obj_getseters,
    .tp_methods = dfs_finish_time_kosaraju_scc_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__dfs_finish_time_kosaraju_scc_obj,
    .tp_members = dfs_finish_time_kosaraju_scc_obj_members,
    .tp_basicsize = sizeof(scc_algo___dfs_finish_time_kosaraju_scc_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(scc_algo___dfs_finish_time_kosaraju_scc_objObject),
    .tp_weaklistoffset = sizeof(scc_algo___dfs_finish_time_kosaraju_scc_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(scc_algo___dfs_finish_time_kosaraju_scc_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_dfs_finish_time_kosaraju_scc_obj_template = &CPyType_dfs_finish_time_kosaraju_scc_obj_template_;

static PyObject *
dfs_finish_time_kosaraju_scc_obj_setup(PyTypeObject *type)
{
    scc_algo___dfs_finish_time_kosaraju_scc_objObject *self;
    self = (scc_algo___dfs_finish_time_kosaraju_scc_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dfs_finish_time_kosaraju_scc_obj_vtable;
    self->vectorcall = CPyPy_dfs_finish_time_kosaraju_scc_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_dfs_finish_time_kosaraju_scc_obj(void)
{
    PyObject *self = dfs_finish_time_kosaraju_scc_obj_setup(CPyType_dfs_finish_time_kosaraju_scc_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
dfs_finish_time_kosaraju_scc_obj_get___3_mypyc_env__(scc_algo___dfs_finish_time_kosaraju_scc_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'dfs_finish_time_kosaraju_scc_obj' undefined");
        return NULL;
    }
    CPy_INCREF(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
dfs_finish_time_kosaraju_scc_obj_set___3_mypyc_env__(scc_algo___dfs_finish_time_kosaraju_scc_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'dfs_finish_time_kosaraju_scc_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_kosaraju_scc_env))
        tmp = value;
    else {
        CPy_TypeError("scc_algo.kosaraju_scc_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}

static PyObject *CPyDunder___get__dfs_collect_scc_size_kosaraju_scc_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_dfs_collect_scc_size_kosaraju_scc_obj_____get__(self, instance, owner);
}
PyMemberDef dfs_collect_scc_size_kosaraju_scc_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *dfs_collect_scc_size_kosaraju_scc_obj_setup(PyTypeObject *type);
PyObject *CPyDef_dfs_collect_scc_size_kosaraju_scc_obj(void);

static PyObject *
dfs_collect_scc_size_kosaraju_scc_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dfs_collect_scc_size_kosaraju_scc_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return dfs_collect_scc_size_kosaraju_scc_obj_setup(type);
}

static int
dfs_collect_scc_size_kosaraju_scc_obj_traverse(scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject))));
    return 0;
}

static int
dfs_collect_scc_size_kosaraju_scc_obj_clear(scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject))));
    return 0;
}

static void
dfs_collect_scc_size_kosaraju_scc_obj_dealloc(scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dfs_collect_scc_size_kosaraju_scc_obj_dealloc)
    dfs_collect_scc_size_kosaraju_scc_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dfs_collect_scc_size_kosaraju_scc_obj_vtable[2];
static bool
CPyDef_dfs_collect_scc_size_kosaraju_scc_obj_trait_vtable_setup(void)
{
    CPyVTableItem dfs_collect_scc_size_kosaraju_scc_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dfs_collect_scc_size_kosaraju_scc_obj_____call__,
        (CPyVTableItem)CPyDef_dfs_collect_scc_size_kosaraju_scc_obj_____get__,
    };
    memcpy(dfs_collect_scc_size_kosaraju_scc_obj_vtable, dfs_collect_scc_size_kosaraju_scc_obj_vtable_scratch, sizeof(dfs_collect_scc_size_kosaraju_scc_obj_vtable));
    return 1;
}

static PyObject *
dfs_collect_scc_size_kosaraju_scc_obj_get___3_mypyc_env__(scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject *self, void *closure);
static int
dfs_collect_scc_size_kosaraju_scc_obj_set___3_mypyc_env__(scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject *self, PyObject *value, void *closure);

static PyGetSetDef dfs_collect_scc_size_kosaraju_scc_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)dfs_collect_scc_size_kosaraju_scc_obj_get___3_mypyc_env__, (setter)dfs_collect_scc_size_kosaraju_scc_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef dfs_collect_scc_size_kosaraju_scc_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_dfs_collect_scc_size_kosaraju_scc_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_dfs_collect_scc_size_kosaraju_scc_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dfs_collect_scc_size_kosaraju_scc_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "dfs_collect_scc_size_kosaraju_scc_obj",
    .tp_new = dfs_collect_scc_size_kosaraju_scc_obj_new,
    .tp_dealloc = (destructor)dfs_collect_scc_size_kosaraju_scc_obj_dealloc,
    .tp_traverse = (traverseproc)dfs_collect_scc_size_kosaraju_scc_obj_traverse,
    .tp_clear = (inquiry)dfs_collect_scc_size_kosaraju_scc_obj_clear,
    .tp_getset = dfs_collect_scc_size_kosaraju_scc_obj_getseters,
    .tp_methods = dfs_collect_scc_size_kosaraju_scc_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__dfs_collect_scc_size_kosaraju_scc_obj,
    .tp_members = dfs_collect_scc_size_kosaraju_scc_obj_members,
    .tp_basicsize = sizeof(scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject),
    .tp_weaklistoffset = sizeof(scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_dfs_collect_scc_size_kosaraju_scc_obj_template = &CPyType_dfs_collect_scc_size_kosaraju_scc_obj_template_;

static PyObject *
dfs_collect_scc_size_kosaraju_scc_obj_setup(PyTypeObject *type)
{
    scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject *self;
    self = (scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dfs_collect_scc_size_kosaraju_scc_obj_vtable;
    self->vectorcall = CPyPy_dfs_collect_scc_size_kosaraju_scc_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_dfs_collect_scc_size_kosaraju_scc_obj(void)
{
    PyObject *self = dfs_collect_scc_size_kosaraju_scc_obj_setup(CPyType_dfs_collect_scc_size_kosaraju_scc_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
dfs_collect_scc_size_kosaraju_scc_obj_get___3_mypyc_env__(scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'dfs_collect_scc_size_kosaraju_scc_obj' undefined");
        return NULL;
    }
    CPy_INCREF(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
dfs_collect_scc_size_kosaraju_scc_obj_set___3_mypyc_env__(scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'dfs_collect_scc_size_kosaraju_scc_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_kosaraju_scc_env))
        tmp = value;
    else {
        CPy_TypeError("scc_algo.kosaraju_scc_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}
static PyMethodDef module_methods[] = {
    {"kosaraju_scc", (PyCFunction)CPyPy_kosaraju_scc, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"reverse_graph", (PyCFunction)CPyPy_reverse_graph, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"display_largest_scc_sizes", (PyCFunction)CPyPy_display_largest_scc_sizes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"main", (PyCFunction)CPyPy_main, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "scc_algo",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    module_methods
};

PyMODINIT_FUNC PyInit_scc_algo(void)
{
    PyObject* modname = NULL;
    if (CPyModule_scc_algo_internal) {
        Py_INCREF(CPyModule_scc_algo_internal);
        return CPyModule_scc_algo_internal;
    }
    CPyModule_scc_algo_internal = PyModule_Create(&module);
    if (unlikely(CPyModule_scc_algo_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_scc_algo_internal, "__name__");
    CPyStatic_globals = PyModule_GetDict(CPyModule_scc_algo_internal);
    if (unlikely(CPyStatic_globals == NULL))
        goto fail;
    CPyType_kosaraju_scc_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_kosaraju_scc_env_template, NULL, modname);
    if (unlikely(!CPyType_kosaraju_scc_env))
        goto fail;
    CPyType_dfs_finish_time_kosaraju_scc_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_dfs_finish_time_kosaraju_scc_obj_template, NULL, modname);
    if (unlikely(!CPyType_dfs_finish_time_kosaraju_scc_obj))
        goto fail;
    CPyType_dfs_collect_scc_size_kosaraju_scc_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_dfs_collect_scc_size_kosaraju_scc_obj_template, NULL, modname);
    if (unlikely(!CPyType_dfs_collect_scc_size_kosaraju_scc_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef___top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_scc_algo_internal;
    fail:
    Py_CLEAR(CPyModule_scc_algo_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_kosaraju_scc_env);
    Py_CLEAR(CPyType_dfs_finish_time_kosaraju_scc_obj);
    Py_CLEAR(CPyType_dfs_collect_scc_size_kosaraju_scc_obj);
    return NULL;
}

PyObject *CPyDef_dfs_finish_time_kosaraju_scc_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_dfs_finish_time_kosaraju_scc_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_dfs_finish_time_kosaraju_scc_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("scc_algo.py", "__get__", -1, CPyStatic_globals);
    return NULL;
}

char CPyDef_dfs_finish_time_kosaraju_scc_obj_____call__(PyObject *cpy_r___mypyc_self__, CPyTagged cpy_r_vertex) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    cpy_r_r0 = ((scc_algo___dfs_finish_time_kosaraju_scc_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("scc_algo.py", "dfs_finish_time", "dfs_finish_time_kosaraju_scc_obj", "__mypyc_env__", 23, CPyStatic_globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "dfs_finish_time", 27, CPyStatic_globals);
        goto CPyL30;
    }
    CPyTagged_INCREF(cpy_r_vertex);
    cpy_r_r2 = CPyTagged_StealAsObject(cpy_r_vertex);
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r2;
CPyL3: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = cpy_r_r7 != 0;
    if (!cpy_r_r8) goto CPyL31;
    cpy_r_r9 = CPyList_GetItemShort(cpy_r_r1, -2);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "dfs_finish_time", 29, CPyStatic_globals);
        goto CPyL32;
    }
    if (likely(PyLong_Check(cpy_r_r9)))
        cpy_r_r10 = CPyTagged_FromObject(cpy_r_r9);
    else {
        CPy_TypeError("int", cpy_r_r9); cpy_r_r10 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("scc_algo.py", "dfs_finish_time", 29, CPyStatic_globals);
        goto CPyL32;
    }
    cpy_r_r11 = ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_visited;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("scc_algo.py", "dfs_finish_time", "kosaraju_scc_env", "visited", 30, CPyStatic_globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r11);
CPyL7: ;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_r12 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r_r13 = PySet_Contains(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("scc_algo.py", "dfs_finish_time", 30, CPyStatic_globals);
        goto CPyL33;
    }
    cpy_r_r15 = cpy_r_r13;
    cpy_r_r16 = cpy_r_r15 ^ 1;
    if (!cpy_r_r16) goto CPyL21;
    cpy_r_r17 = ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_visited;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("scc_algo.py", "dfs_finish_time", "kosaraju_scc_env", "visited", 31, CPyStatic_globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r17);
CPyL10: ;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_r18 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r_r19 = PySet_Add(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("scc_algo.py", "dfs_finish_time", 31, CPyStatic_globals);
        goto CPyL33;
    }
    cpy_r_r21 = ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("scc_algo.py", "dfs_finish_time", "kosaraju_scc_env", "graph", 32, CPyStatic_globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r21);
CPyL12: ;
    cpy_r_r22 = CPyStatics[3]; /* 'adj_list' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "dfs_finish_time", 32, CPyStatic_globals);
        goto CPyL33;
    }
    cpy_r_r24 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r_r25 = PyObject_GetItem(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "dfs_finish_time", 32, CPyStatic_globals);
        goto CPyL32;
    }
    cpy_r_r26 = PyObject_GetIter(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "dfs_finish_time", 32, CPyStatic_globals);
        goto CPyL32;
    }
CPyL15: ;
    cpy_r_r27 = PyIter_Next(cpy_r_r26);
    if (cpy_r_r27 == NULL) goto CPyL34;
    cpy_r_r28 = ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_visited;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("scc_algo.py", "dfs_finish_time", "kosaraju_scc_env", "visited", 33, CPyStatic_globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r28);
CPyL17: ;
    cpy_r_r29 = PySet_Contains(cpy_r_r28, cpy_r_r27);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("scc_algo.py", "dfs_finish_time", 33, CPyStatic_globals);
        goto CPyL35;
    }
    cpy_r_r31 = cpy_r_r29;
    cpy_r_r32 = cpy_r_r31 ^ 1;
    if (!cpy_r_r32) goto CPyL36;
    cpy_r_r33 = PyList_Append(cpy_r_r1, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("scc_algo.py", "dfs_finish_time", 34, CPyStatic_globals);
        goto CPyL37;
    } else
        goto CPyL15;
CPyL20: ;
    cpy_r_r35 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("scc_algo.py", "dfs_finish_time", 32, CPyStatic_globals);
        goto CPyL32;
    } else
        goto CPyL3;
CPyL21: ;
    cpy_r_r36 = CPyList_PopLast(cpy_r_r1);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "dfs_finish_time", 36, CPyStatic_globals);
        goto CPyL33;
    }
    if (likely(PyLong_Check(cpy_r_r36)))
        cpy_r_r37 = CPyTagged_FromObject(cpy_r_r36);
    else {
        CPy_TypeError("int", cpy_r_r36); cpy_r_r37 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == CPY_INT_TAG)) {
        CPy_AddTraceback("scc_algo.py", "dfs_finish_time", 36, CPyStatic_globals);
        goto CPyL33;
    } else
        goto CPyL38;
CPyL23: ;
    cpy_r_r38 = ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_finish_stack;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("scc_algo.py", "dfs_finish_time", "kosaraju_scc_env", "finish_stack", 37, CPyStatic_globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r38);
CPyL24: ;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_r39 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r_r40 = PySequence_Contains(cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("scc_algo.py", "dfs_finish_time", 37, CPyStatic_globals);
        goto CPyL33;
    }
    cpy_r_r42 = cpy_r_r40;
    cpy_r_r43 = cpy_r_r42 ^ 1;
    if (!cpy_r_r43) goto CPyL39;
    cpy_r_r44 = ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_finish_stack;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("scc_algo.py", "dfs_finish_time", "kosaraju_scc_env", "finish_stack", 38, CPyStatic_globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r44);
CPyL27: ;
    cpy_r_r45 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r_r46 = PyList_Append(cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("scc_algo.py", "dfs_finish_time", 38, CPyStatic_globals);
        goto CPyL32;
    } else
        goto CPyL3;
CPyL28: ;
    return 1;
CPyL29: ;
    cpy_r_r48 = 2;
    return cpy_r_r48;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL29;
CPyL31: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    goto CPyL28;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL29;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_r10);
    goto CPyL29;
CPyL34: ;
    CPy_DECREF(cpy_r_r26);
    goto CPyL20;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    goto CPyL29;
CPyL36: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL15;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r26);
    goto CPyL29;
CPyL38: ;
    CPyTagged_DECREF(cpy_r_r37);
    goto CPyL23;
CPyL39: ;
    CPyTagged_DECREF(cpy_r_r10);
    goto CPyL3;
}

PyObject *CPyPy_dfs_finish_time_kosaraju_scc_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"vertex", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_vertex;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_vertex)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    CPyTagged arg_vertex;
    if (likely(PyLong_Check(obj_vertex)))
        arg_vertex = CPyTagged_BorrowFromObject(obj_vertex);
    else {
        CPy_TypeError("int", obj_vertex); goto fail;
    }
    char retval = CPyDef_dfs_finish_time_kosaraju_scc_obj_____call__(arg___mypyc_self__, arg_vertex);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("scc_algo.py", "dfs_finish_time", 23, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_dfs_collect_scc_size_kosaraju_scc_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_dfs_collect_scc_size_kosaraju_scc_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_dfs_collect_scc_size_kosaraju_scc_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("scc_algo.py", "__get__", -1, CPyStatic_globals);
    return NULL;
}

CPyTagged CPyDef_dfs_collect_scc_size_kosaraju_scc_obj_____call__(PyObject *cpy_r___mypyc_self__, CPyTagged cpy_r_vertex) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyTagged cpy_r_size;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    cpy_r_r0 = ((scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("scc_algo.py", "dfs_collect_scc_size", "dfs_collect_scc_size_kosaraju_scc_obj", "__mypyc_env__", 51, CPyStatic_globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "dfs_collect_scc_size", 55, CPyStatic_globals);
        goto CPyL23;
    }
    CPyTagged_INCREF(cpy_r_vertex);
    cpy_r_r2 = CPyTagged_StealAsObject(cpy_r_vertex);
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r2;
    cpy_r_size = 0;
CPyL3: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = cpy_r_r7 != 0;
    if (!cpy_r_r8) goto CPyL24;
    cpy_r_r9 = CPyList_PopLast(cpy_r_r1);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "dfs_collect_scc_size", 58, CPyStatic_globals);
        goto CPyL25;
    }
    if (likely(PyLong_Check(cpy_r_r9)))
        cpy_r_r10 = CPyTagged_FromObject(cpy_r_r9);
    else {
        CPy_TypeError("int", cpy_r_r9); cpy_r_r10 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("scc_algo.py", "dfs_collect_scc_size", 58, CPyStatic_globals);
        goto CPyL25;
    }
    cpy_r_r11 = ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_visited;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("scc_algo.py", "dfs_collect_scc_size", "kosaraju_scc_env", "visited", 59, CPyStatic_globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r11);
CPyL7: ;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_r12 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r_r13 = PySet_Contains(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("scc_algo.py", "dfs_collect_scc_size", 59, CPyStatic_globals);
        goto CPyL26;
    }
    cpy_r_r15 = cpy_r_r13;
    cpy_r_r16 = cpy_r_r15 ^ 1;
    if (!cpy_r_r16) goto CPyL27;
    cpy_r_r17 = ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_visited;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("scc_algo.py", "dfs_collect_scc_size", "kosaraju_scc_env", "visited", 60, CPyStatic_globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r17);
CPyL10: ;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_r18 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r_r19 = PySet_Add(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("scc_algo.py", "dfs_collect_scc_size", 60, CPyStatic_globals);
        goto CPyL26;
    }
    cpy_r_r21 = CPyTagged_Add(cpy_r_size, 2);
    CPyTagged_DECREF(cpy_r_size);
    cpy_r_size = cpy_r_r21;
    cpy_r_r22 = ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_reversed_graph;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("scc_algo.py", "dfs_collect_scc_size", "kosaraju_scc_env", "reversed_graph", 62, CPyStatic_globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r22);
CPyL12: ;
    cpy_r_r23 = CPyStatics[3]; /* 'adj_list' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "dfs_collect_scc_size", 62, CPyStatic_globals);
        goto CPyL26;
    }
    cpy_r_r25 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r_r26 = PyObject_GetItem(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "dfs_collect_scc_size", 62, CPyStatic_globals);
        goto CPyL25;
    }
    cpy_r_r27 = PyObject_GetIter(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "dfs_collect_scc_size", 62, CPyStatic_globals);
        goto CPyL25;
    }
CPyL15: ;
    cpy_r_r28 = PyIter_Next(cpy_r_r27);
    if (cpy_r_r28 == NULL) goto CPyL28;
    cpy_r_r29 = ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_visited;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("scc_algo.py", "dfs_collect_scc_size", "kosaraju_scc_env", "visited", 63, CPyStatic_globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r29);
CPyL17: ;
    cpy_r_r30 = PySet_Contains(cpy_r_r29, cpy_r_r28);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("scc_algo.py", "dfs_collect_scc_size", 63, CPyStatic_globals);
        goto CPyL29;
    }
    cpy_r_r32 = cpy_r_r30;
    cpy_r_r33 = cpy_r_r32 ^ 1;
    if (!cpy_r_r33) goto CPyL30;
    cpy_r_r34 = PyList_Append(cpy_r_r1, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("scc_algo.py", "dfs_collect_scc_size", 64, CPyStatic_globals);
        goto CPyL31;
    } else
        goto CPyL15;
CPyL20: ;
    cpy_r_r36 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("scc_algo.py", "dfs_collect_scc_size", 62, CPyStatic_globals);
        goto CPyL25;
    } else
        goto CPyL3;
CPyL21: ;
    return cpy_r_size;
CPyL22: ;
    cpy_r_r37 = CPY_INT_TAG;
    return cpy_r_r37;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL22;
CPyL24: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_size);
    goto CPyL22;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_size);
    CPyTagged_DecRef(cpy_r_r10);
    goto CPyL22;
CPyL27: ;
    CPyTagged_DECREF(cpy_r_r10);
    goto CPyL3;
CPyL28: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL20;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_size);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r28);
    goto CPyL22;
CPyL30: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL15;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_size);
    CPy_DecRef(cpy_r_r27);
    goto CPyL22;
}

PyObject *CPyPy_dfs_collect_scc_size_kosaraju_scc_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"vertex", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_vertex;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_vertex)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    CPyTagged arg_vertex;
    if (likely(PyLong_Check(obj_vertex)))
        arg_vertex = CPyTagged_BorrowFromObject(obj_vertex);
    else {
        CPy_TypeError("int", obj_vertex); goto fail;
    }
    CPyTagged retval = CPyDef_dfs_collect_scc_size_kosaraju_scc_obj_____call__(arg___mypyc_self__, arg_vertex);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("scc_algo.py", "dfs_collect_scc_size", 51, CPyStatic_globals);
    return NULL;
}

tuple_T2IO CPyDef_kosaraju_scc(PyObject *cpy_r_graph) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_dfs_finish_time;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_dfs_collect_scc_size;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject **cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    CPyPtr cpy_r_r52;
    int64_t cpy_r_r53;
    CPyTagged cpy_r_r54;
    tuple_T2IO cpy_r_r55;
    tuple_T2IO cpy_r_r56;
    cpy_r_r0 = CPyDef_kosaraju_scc_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 9, CPyStatic_globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_graph);
    if (((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_graph != NULL) {
        CPy_DECREF(((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_graph);
    }
    ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_graph = cpy_r_graph;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 9, CPyStatic_globals);
        goto CPyL40;
    }
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 20, CPyStatic_globals);
        goto CPyL40;
    }
    if (((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_finish_stack != NULL) {
        CPy_DECREF(((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_finish_stack);
    }
    ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_finish_stack = cpy_r_r2;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 20, CPyStatic_globals);
        goto CPyL40;
    }
    cpy_r_r4 = PySet_New(NULL);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 21, CPyStatic_globals);
        goto CPyL40;
    }
    if (((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_visited != NULL) {
        CPy_DECREF(((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_visited);
    }
    ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_visited = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 21, CPyStatic_globals);
        goto CPyL40;
    }
    cpy_r_r6 = CPyDef_dfs_finish_time_kosaraju_scc_obj();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 23, CPyStatic_globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r0);
    if (((scc_algo___dfs_finish_time_kosaraju_scc_objObject *)cpy_r_r6)->___mypyc_env__ != NULL) {
        CPy_DECREF(((scc_algo___dfs_finish_time_kosaraju_scc_objObject *)cpy_r_r6)->___mypyc_env__);
    }
    ((scc_algo___dfs_finish_time_kosaraju_scc_objObject *)cpy_r_r6)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 23, CPyStatic_globals);
        goto CPyL41;
    }
    cpy_r_dfs_finish_time = cpy_r_r6;
    cpy_r_r8 = ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("scc_algo.py", "kosaraju_scc", "kosaraju_scc_env", "graph", 43, CPyStatic_globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r8);
CPyL9: ;
    cpy_r_r9 = CPyStatics[4]; /* 'vertices' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 43, CPyStatic_globals);
        goto CPyL42;
    }
    cpy_r_r11 = PyObject_GetIter(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 43, CPyStatic_globals);
        goto CPyL42;
    }
CPyL11: ;
    cpy_r_r12 = PyIter_Next(cpy_r_r11);
    if (cpy_r_r12 == NULL) goto CPyL43;
    cpy_r_node = cpy_r_r12;
    cpy_r_r13 = ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_visited;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("scc_algo.py", "kosaraju_scc", "kosaraju_scc_env", "visited", 44, CPyStatic_globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r13);
CPyL13: ;
    cpy_r_r14 = PySet_Contains(cpy_r_r13, cpy_r_node);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 44, CPyStatic_globals);
        goto CPyL44;
    }
    cpy_r_r16 = cpy_r_r14;
    cpy_r_r17 = cpy_r_r16 ^ 1;
    if (!cpy_r_r17) goto CPyL45;
    PyObject *cpy_r_r18[1] = {cpy_r_node};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_dfs_finish_time, cpy_r_r19, 1, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 45, CPyStatic_globals);
        goto CPyL44;
    } else
        goto CPyL46;
CPyL16: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL11;
CPyL17: ;
    cpy_r_r21 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 43, CPyStatic_globals);
        goto CPyL40;
    }
    cpy_r_r22 = ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("scc_algo.py", "kosaraju_scc", "kosaraju_scc_env", "graph", 47, CPyStatic_globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r22);
CPyL19: ;
    cpy_r_r23 = CPyDef_reverse_graph(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 47, CPyStatic_globals);
        goto CPyL40;
    }
    if (((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_reversed_graph != NULL) {
        CPy_DECREF(((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_reversed_graph);
    }
    ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_reversed_graph = cpy_r_r23;
    cpy_r_r24 = 1;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 47, CPyStatic_globals);
        goto CPyL40;
    }
    cpy_r_r25 = PyList_New(0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 48, CPyStatic_globals);
        goto CPyL40;
    }
    cpy_r_r26 = ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_visited;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("scc_algo.py", "kosaraju_scc", "kosaraju_scc_env", "visited", 49, CPyStatic_globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r26);
CPyL23: ;
    cpy_r_r27 = PySet_Clear(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 49, CPyStatic_globals);
        goto CPyL47;
    }
    cpy_r_r29 = CPyDef_dfs_collect_scc_size_kosaraju_scc_obj();
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 51, CPyStatic_globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r0);
    if (((scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject *)cpy_r_r29)->___mypyc_env__ != NULL) {
        CPy_DECREF(((scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject *)cpy_r_r29)->___mypyc_env__);
    }
    ((scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject *)cpy_r_r29)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r30 = 1;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 51, CPyStatic_globals);
        goto CPyL48;
    }
    cpy_r_dfs_collect_scc_size = cpy_r_r29;
CPyL27: ;
    cpy_r_r31 = ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_finish_stack;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("scc_algo.py", "kosaraju_scc", "kosaraju_scc_env", "finish_stack", 67, CPyStatic_globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r31);
CPyL28: ;
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_r31)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    CPy_DECREF(cpy_r_r31);
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = cpy_r_r34 != 0;
    if (!cpy_r_r35) goto CPyL50;
    cpy_r_r36 = ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_finish_stack;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("scc_algo.py", "kosaraju_scc", "kosaraju_scc_env", "finish_stack", 68, CPyStatic_globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r36);
CPyL30: ;
    cpy_r_r37 = CPyList_PopLast(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 68, CPyStatic_globals);
        goto CPyL49;
    }
    if (likely(PyLong_Check(cpy_r_r37)))
        cpy_r_r38 = CPyTagged_FromObject(cpy_r_r37);
    else {
        CPy_TypeError("int", cpy_r_r37); cpy_r_r38 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == CPY_INT_TAG)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 68, CPyStatic_globals);
        goto CPyL49;
    }
    cpy_r_r39 = CPyTagged_StealAsObject(cpy_r_r38);
    cpy_r_node = cpy_r_r39;
    cpy_r_r40 = ((scc_algo___kosaraju_scc_envObject *)cpy_r_r0)->_visited;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("scc_algo.py", "kosaraju_scc", "kosaraju_scc_env", "visited", 69, CPyStatic_globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r40);
CPyL33: ;
    cpy_r_r41 = PySet_Contains(cpy_r_r40, cpy_r_node);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 69, CPyStatic_globals);
        goto CPyL51;
    }
    cpy_r_r43 = cpy_r_r41;
    cpy_r_r44 = cpy_r_r43 ^ 1;
    if (!cpy_r_r44) goto CPyL52;
    PyObject *cpy_r_r45[1] = {cpy_r_node};
    cpy_r_r46 = (PyObject **)&cpy_r_r45;
    cpy_r_r47 = _PyObject_Vectorcall(cpy_r_dfs_collect_scc_size, cpy_r_r46, 1, 0);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 70, CPyStatic_globals);
        goto CPyL51;
    }
    CPy_DECREF(cpy_r_node);
    if (likely(PyLong_Check(cpy_r_r47)))
        cpy_r_r48 = CPyTagged_FromObject(cpy_r_r47);
    else {
        CPy_TypeError("int", cpy_r_r47); cpy_r_r48 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == CPY_INT_TAG)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 70, CPyStatic_globals);
        goto CPyL49;
    }
    cpy_r_r49 = CPyTagged_StealAsObject(cpy_r_r48);
    cpy_r_r50 = PyList_Append(cpy_r_r25, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 71, CPyStatic_globals);
        goto CPyL49;
    } else
        goto CPyL27;
CPyL38: ;
    cpy_r_r52 = (CPyPtr)&((PyVarObject *)cpy_r_r25)->ob_size;
    cpy_r_r53 = *(int64_t *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 << 1;
    cpy_r_r55.f0 = cpy_r_r54;
    cpy_r_r55.f1 = cpy_r_r25;
    return cpy_r_r55;
CPyL39: ;
    tuple_T2IO __tmp1 = { CPY_INT_TAG, NULL };
    cpy_r_r56 = __tmp1;
    return cpy_r_r56;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL39;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    goto CPyL39;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_dfs_finish_time);
    goto CPyL39;
CPyL43: ;
    CPy_DECREF(cpy_r_dfs_finish_time);
    CPy_DECREF(cpy_r_r11);
    goto CPyL17;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_dfs_finish_time);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_node);
    goto CPyL39;
CPyL45: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL11;
CPyL46: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL16;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r25);
    goto CPyL39;
CPyL48: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r29);
    goto CPyL39;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_dfs_collect_scc_size);
    goto CPyL39;
CPyL50: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_dfs_collect_scc_size);
    goto CPyL38;
CPyL51: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_dfs_collect_scc_size);
    goto CPyL39;
CPyL52: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL27;
}

PyObject *CPyPy_kosaraju_scc(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"graph", 0};
    static CPyArg_Parser parser = {"O:kosaraju_scc", kwlist, 0};
    PyObject *obj_graph;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_graph)) {
        return NULL;
    }
    PyObject *arg_graph = obj_graph;
    tuple_T2IO retval = CPyDef_kosaraju_scc(arg_graph);
    if (retval.f0 == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2 = CPyTagged_StealAsObject(retval.f0);
    PyTuple_SET_ITEM(retbox, 0, __tmp2);
    PyObject *__tmp3 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp3);
    return retbox;
fail: ;
    CPy_AddTraceback("scc_algo.py", "kosaraju_scc", 9, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_reverse_graph(PyObject *cpy_r_graph) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    cpy_r_r0 = (PyObject *)&PyList_Type;
    cpy_r_r1 = CPyStatic_globals;
    cpy_r_r2 = CPyStatics[5]; /* 'defaultdict' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 85, CPyStatic_globals);
        goto CPyL30;
    }
    PyObject *cpy_r_r4[1] = {cpy_r_r0};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 85, CPyStatic_globals);
        goto CPyL30;
    }
    if (likely(PyDict_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("scc_algo.py", "reverse_graph", 85, CPyStatic_globals, "dict", cpy_r_r6);
        goto CPyL30;
    }
    cpy_r_r8 = CPyStatics[3]; /* 'adj_list' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_graph, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 86, CPyStatic_globals);
        goto CPyL31;
    }
    cpy_r_r10 = CPyStatics[6]; /* 'items' */
    PyObject *cpy_r_r11[1] = {cpy_r_r9};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = PyObject_VectorcallMethod(cpy_r_r10, cpy_r_r12, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 86, CPyStatic_globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_r9);
    cpy_r_r14 = PyObject_GetIter(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 86, CPyStatic_globals);
        goto CPyL31;
    }
CPyL6: ;
    cpy_r_r15 = PyIter_Next(cpy_r_r14);
    if (cpy_r_r15 == NULL) goto CPyL33;
    cpy_r_r16 = PyObject_GetIter(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 86, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r17 = PyIter_Next(cpy_r_r16);
    if (cpy_r_r17 == NULL) {
        goto CPyL35;
    } else
        goto CPyL11;
CPyL9: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 86, CPyStatic_globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r19 = PyIter_Next(cpy_r_r16);
    if (cpy_r_r19 == NULL) {
        goto CPyL36;
    } else
        goto CPyL14;
CPyL12: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 86, CPyStatic_globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r21 = PyIter_Next(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (cpy_r_r21 == NULL) {
        goto CPyL17;
    } else
        goto CPyL37;
CPyL15: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r22 = 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 86, CPyStatic_globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r23 = PyObject_GetIter(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 87, CPyStatic_globals);
        goto CPyL38;
    }
CPyL18: ;
    cpy_r_r24 = PyIter_Next(cpy_r_r23);
    if (cpy_r_r24 == NULL) goto CPyL39;
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r7, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 88, CPyStatic_globals);
        goto CPyL40;
    }
    if (likely(PyList_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("scc_algo.py", "reverse_graph", 88, CPyStatic_globals, "list", cpy_r_r25);
        goto CPyL40;
    }
    cpy_r_r27 = PyList_Append(cpy_r_r26, cpy_r_r17);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 88, CPyStatic_globals);
        goto CPyL40;
    } else
        goto CPyL18;
CPyL22: ;
    cpy_r_r29 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 87, CPyStatic_globals);
        goto CPyL34;
    } else
        goto CPyL6;
CPyL23: ;
    cpy_r_r30 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 86, CPyStatic_globals);
        goto CPyL31;
    }
    cpy_r_r31 = CPyDict_Keys(cpy_r_r7);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 91, CPyStatic_globals);
        goto CPyL31;
    }
    cpy_r_r32 = PyList_New(0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 91, CPyStatic_globals);
        goto CPyL41;
    }
    cpy_r_r33 = CPyStatic_globals;
    cpy_r_r34 = CPyStatics[7]; /* 'Graph' */
    cpy_r_r35 = CPyDict_GetItem(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 91, CPyStatic_globals);
        goto CPyL42;
    }
    cpy_r_r36 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r37[3] = {cpy_r_r31, cpy_r_r32, cpy_r_r36};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = CPyStatics[40]; /* ('vertices', 'edges', 'use_double_linked_list') */
    cpy_r_r40 = _PyObject_Vectorcall(cpy_r_r35, cpy_r_r38, 0, cpy_r_r39);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 91, CPyStatic_globals);
        goto CPyL42;
    }
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r41 = CPyStatics[3]; /* 'adj_list' */
    cpy_r_r42 = PyObject_SetAttr(cpy_r_r40, cpy_r_r41, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("scc_algo.py", "reverse_graph", 92, CPyStatic_globals);
        goto CPyL43;
    }
    return cpy_r_r40;
CPyL30: ;
    cpy_r_r44 = NULL;
    return cpy_r_r44;
CPyL31: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL30;
CPyL32: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r9);
    goto CPyL30;
CPyL33: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL23;
CPyL34: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r14);
    goto CPyL30;
CPyL35: ;
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r16);
    goto CPyL9;
CPyL36: ;
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r17);
    goto CPyL12;
CPyL37: ;
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r21);
    goto CPyL15;
CPyL38: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r17);
    goto CPyL30;
CPyL39: ;
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r23);
    goto CPyL22;
CPyL40: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r23);
    goto CPyL30;
CPyL41: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r31);
    goto CPyL30;
CPyL42: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r32);
    goto CPyL30;
CPyL43: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL30;
}

PyObject *CPyPy_reverse_graph(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"graph", 0};
    static CPyArg_Parser parser = {"O:reverse_graph", kwlist, 0};
    PyObject *obj_graph;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_graph)) {
        return NULL;
    }
    PyObject *arg_graph = obj_graph;
    PyObject *retval = CPyDef_reverse_graph(arg_graph);
    return retval;
fail: ;
    CPy_AddTraceback("scc_algo.py", "reverse_graph", 75, CPyStatic_globals);
    return NULL;
}

char CPyDef_display_largest_scc_sizes(PyObject *cpy_r_scc_sizes, CPyTagged cpy_r_num_largest) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    if (cpy_r_num_largest != CPY_INT_TAG) goto CPyL15;
    cpy_r_num_largest = 10;
CPyL2: ;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[10]; /* 'sorted' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "display_largest_scc_sizes", 104, CPyStatic_globals);
        goto CPyL16;
    }
    cpy_r_r3 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r4[2] = {cpy_r_scc_sizes, cpy_r_r3};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = CPyStatics[41]; /* ('reverse',) */
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r2, cpy_r_r5, 1, cpy_r_r6);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "display_largest_scc_sizes", 104, CPyStatic_globals);
        goto CPyL16;
    }
    if (likely(PyList_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("scc_algo.py", "display_largest_scc_sizes", 104, CPyStatic_globals, "list", cpy_r_r7);
        goto CPyL16;
    }
    cpy_r_r9 = CPyList_GetSlice(cpy_r_r8, 0, cpy_r_num_largest);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "display_largest_scc_sizes", 107, CPyStatic_globals);
        goto CPyL16;
    }
    if (likely(PyList_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("scc_algo.py", "display_largest_scc_sizes", 107, CPyStatic_globals, "list", cpy_r_r9);
        goto CPyL16;
    }
    cpy_r_r11 = CPyStatics[12]; /* 'The sizes of the ' */
    cpy_r_r12 = CPyTagged_Str(cpy_r_num_largest);
    CPyTagged_DECREF(cpy_r_num_largest);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "display_largest_scc_sizes", 110, CPyStatic_globals);
        goto CPyL17;
    }
    cpy_r_r13 = CPyStatics[13]; /* ' largest SCCs are:' */
    cpy_r_r14 = CPyStr_Build(3, cpy_r_r11, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "display_largest_scc_sizes", 110, CPyStatic_globals);
        goto CPyL17;
    }
    cpy_r_r15 = CPyModule_builtins;
    cpy_r_r16 = CPyStatics[14]; /* 'print' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "display_largest_scc_sizes", 110, CPyStatic_globals);
        goto CPyL18;
    }
    PyObject *cpy_r_r18[1] = {cpy_r_r14};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "display_largest_scc_sizes", 110, CPyStatic_globals);
        goto CPyL18;
    } else
        goto CPyL19;
CPyL11: ;
    CPy_DECREF(cpy_r_r14);
    cpy_r_r21 = CPyModule_builtins;
    cpy_r_r22 = CPyStatics[14]; /* 'print' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "display_largest_scc_sizes", 111, CPyStatic_globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r24[1] = {cpy_r_r10};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r25, 1, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "display_largest_scc_sizes", 111, CPyStatic_globals);
        goto CPyL17;
    } else
        goto CPyL20;
CPyL13: ;
    CPy_DECREF(cpy_r_r10);
    return 1;
CPyL14: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
CPyL15: ;
    CPyTagged_INCREF(cpy_r_num_largest);
    goto CPyL2;
CPyL16: ;
    CPyTagged_DecRef(cpy_r_num_largest);
    goto CPyL14;
CPyL17: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r14);
    goto CPyL14;
CPyL19: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL11;
CPyL20: ;
    CPy_DECREF(cpy_r_r26);
    goto CPyL13;
}

PyObject *CPyPy_display_largest_scc_sizes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"scc_sizes", "num_largest", 0};
    static CPyArg_Parser parser = {"O|O:display_largest_scc_sizes", kwlist, 0};
    PyObject *obj_scc_sizes;
    PyObject *obj_num_largest = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_scc_sizes, &obj_num_largest)) {
        return NULL;
    }
    PyObject *arg_scc_sizes;
    if (likely(PyList_Check(obj_scc_sizes)))
        arg_scc_sizes = obj_scc_sizes;
    else {
        CPy_TypeError("list", obj_scc_sizes); 
        goto fail;
    }
    CPyTagged arg_num_largest;
    if (obj_num_largest == NULL) {
        arg_num_largest = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_num_largest)))
        arg_num_largest = CPyTagged_BorrowFromObject(obj_num_largest);
    else {
        CPy_TypeError("int", obj_num_largest); goto fail;
    }
    char retval = CPyDef_display_largest_scc_sizes(arg_scc_sizes, arg_num_largest);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("scc_algo.py", "display_largest_scc_sizes", 95, CPyStatic_globals);
    return NULL;
}

char CPyDef_main(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    double cpy_r_r11;
    char cpy_r_r12;
    tuple_T2IO cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    double cpy_r_r23;
    char cpy_r_r24;
    double cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    double cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    CPyPtr cpy_r_r41;
    CPyPtr cpy_r_r42;
    CPyPtr cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    cpy_r_r0 = CPyStatics[15]; /* 'scc.txt' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatic_globals;
    cpy_r_r2 = CPyStatics[16]; /* 'load_graph' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "main", 115, CPyStatic_globals);
        goto CPyL20;
    }
    PyObject *cpy_r_r4[1] = {cpy_r_r0};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "main", 115, CPyStatic_globals);
        goto CPyL20;
    }
    CPy_DECREF(cpy_r_r0);
    cpy_r_r7 = CPyStatic_globals;
    cpy_r_r8 = CPyStatics[17]; /* 'perf_counter' */
    cpy_r_r9 = CPyDict_GetItem(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "main", 118, CPyStatic_globals);
        goto CPyL21;
    }
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_r9, 0, 0, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "main", 118, CPyStatic_globals);
        goto CPyL21;
    }
    cpy_r_r11 = PyFloat_AsDouble(cpy_r_r10);
    if (cpy_r_r11 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r10); cpy_r_r11 = -113.0;
    }
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 == -113.0;
    if (unlikely(cpy_r_r12)) goto CPyL6;
CPyL5: ;
    cpy_r_r13 = CPyDef_kosaraju_scc(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r13.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("scc_algo.py", "main", 119, CPyStatic_globals);
        goto CPyL19;
    } else
        goto CPyL7;
CPyL6: ;
    cpy_r_r14 = PyErr_Occurred();
    if (unlikely(cpy_r_r14 != NULL)) {
        CPy_AddTraceback("scc_algo.py", "main", 118, CPyStatic_globals);
        goto CPyL21;
    } else
        goto CPyL5;
CPyL7: ;
    cpy_r_r15 = cpy_r_r13.f0;
    cpy_r_r16 = cpy_r_r15;
    CPyTagged_DECREF(cpy_r_r16);
    cpy_r_r17 = cpy_r_r13.f1;
    cpy_r_r18 = cpy_r_r17;
    cpy_r_r19 = CPyStatic_globals;
    cpy_r_r20 = CPyStatics[17]; /* 'perf_counter' */
    cpy_r_r21 = CPyDict_GetItem(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "main", 120, CPyStatic_globals);
        goto CPyL22;
    }
    cpy_r_r22 = _PyObject_Vectorcall(cpy_r_r21, 0, 0, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "main", 120, CPyStatic_globals);
        goto CPyL22;
    }
    cpy_r_r23 = PyFloat_AsDouble(cpy_r_r22);
    if (cpy_r_r23 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r22); cpy_r_r23 = -113.0;
    }
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 == -113.0;
    if (unlikely(cpy_r_r24)) goto CPyL11;
CPyL10: ;
    cpy_r_r25 = cpy_r_r23 - cpy_r_r11;
    cpy_r_r26 = CPyStatics[18]; /* '' */
    cpy_r_r27 = CPyStatics[19]; /* 'time taken:\t' */
    cpy_r_r28 = CPyStatics[20]; /* '{:{}}' */
    cpy_r_r29 = cpy_r_r25 * 1000.0;
    cpy_r_r30 = CPyStatics[21]; /* '.3f' */
    cpy_r_r31 = CPyStatics[22]; /* 'format' */
    cpy_r_r32 = PyFloat_FromDouble(cpy_r_r29);
    PyObject *cpy_r_r33[3] = {cpy_r_r28, cpy_r_r32, cpy_r_r30};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = PyObject_VectorcallMethod(cpy_r_r31, cpy_r_r34, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "main", 124, CPyStatic_globals);
        goto CPyL23;
    } else
        goto CPyL12;
CPyL11: ;
    cpy_r_r36 = PyErr_Occurred();
    if (unlikely(cpy_r_r36 != NULL)) {
        CPy_AddTraceback("scc_algo.py", "main", 120, CPyStatic_globals);
        goto CPyL22;
    } else
        goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_r32);
    if (likely(PyUnicode_Check(cpy_r_r35)))
        cpy_r_r37 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("scc_algo.py", "main", 124, CPyStatic_globals, "str", cpy_r_r35);
        goto CPyL22;
    }
    cpy_r_r38 = CPyStatics[23]; /* ' msec' */
    cpy_r_r39 = PyList_New(3);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "main", 124, CPyStatic_globals);
        goto CPyL24;
    }
    cpy_r_r40 = (CPyPtr)&((PyListObject *)cpy_r_r39)->ob_item;
    cpy_r_r41 = *(CPyPtr *)cpy_r_r40;
    CPy_INCREF(cpy_r_r27);
    *(PyObject * *)cpy_r_r41 = cpy_r_r27;
    cpy_r_r42 = cpy_r_r41 + 8;
    *(PyObject * *)cpy_r_r42 = cpy_r_r37;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r43 = cpy_r_r41 + 16;
    *(PyObject * *)cpy_r_r43 = cpy_r_r38;
    cpy_r_r44 = PyUnicode_Join(cpy_r_r26, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "main", 124, CPyStatic_globals);
        goto CPyL22;
    }
    cpy_r_r45 = CPyModule_builtins;
    cpy_r_r46 = CPyStatics[14]; /* 'print' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "main", 124, CPyStatic_globals);
        goto CPyL25;
    }
    PyObject *cpy_r_r48[1] = {cpy_r_r44};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = _PyObject_Vectorcall(cpy_r_r47, cpy_r_r49, 1, 0);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "main", 124, CPyStatic_globals);
        goto CPyL25;
    } else
        goto CPyL26;
CPyL17: ;
    CPy_DECREF(cpy_r_r44);
    cpy_r_r51 = CPY_INT_TAG;
    cpy_r_r52 = CPyDef_display_largest_scc_sizes(cpy_r_r18, cpy_r_r51);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("scc_algo.py", "main", 127, CPyStatic_globals);
        goto CPyL19;
    }
    return 1;
CPyL19: ;
    cpy_r_r53 = 2;
    return cpy_r_r53;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL19;
CPyL21: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL19;
CPyL22: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL19;
CPyL23: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r32);
    goto CPyL19;
CPyL24: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r37);
    goto CPyL19;
CPyL25: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r44);
    goto CPyL19;
CPyL26: ;
    CPy_DECREF(cpy_r_r50);
    goto CPyL17;
}

PyObject *CPyPy_main(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":main", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    char retval = CPyDef_main();
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("scc_algo.py", "main", 113, CPyStatic_globals);
    return NULL;
}

char CPyDef___top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r18;
    void *cpy_r_r20;
    void *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject **cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[24]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "<module>", -1, CPyStatic_globals);
        goto CPyL18;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[42]; /* ('Graph', 'load_graph_from_file') */
    cpy_r_r6 = CPyStatics[43]; /* ('Graph', 'load_graph') */
    cpy_r_r7 = CPyStatics[26]; /* 'adj_list_rep' */
    cpy_r_r8 = CPyStatic_globals;
    cpy_r_r9 = CPyImport_ImportFromMany(cpy_r_r7, cpy_r_r5, cpy_r_r6, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "<module>", 1, CPyStatic_globals);
        goto CPyL18;
    }
    CPyModule_adj_list_rep = cpy_r_r9;
    CPy_INCREF(CPyModule_adj_list_rep);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r10 = CPyStatics[44]; /* ('defaultdict',) */
    cpy_r_r11 = CPyStatics[27]; /* 'collections' */
    cpy_r_r12 = CPyStatic_globals;
    cpy_r_r13 = CPyImport_ImportFromMany(cpy_r_r11, cpy_r_r10, cpy_r_r10, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "<module>", 2, CPyStatic_globals);
        goto CPyL18;
    }
    CPyModule_collections = cpy_r_r13;
    CPy_INCREF(CPyModule_collections);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r14 = CPyStatics[45]; /* ('List', 'Tuple', 'Set') */
    cpy_r_r15 = CPyStatics[31]; /* 'typing' */
    cpy_r_r16 = CPyStatic_globals;
    cpy_r_r17 = CPyImport_ImportFromMany(cpy_r_r15, cpy_r_r14, cpy_r_r14, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "<module>", 3, CPyStatic_globals);
        goto CPyL18;
    }
    CPyModule_typing = cpy_r_r17;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r18 = (PyObject **)&CPyModule_sys;
    PyObject **cpy_r_r19[1] = {cpy_r_r18};
    cpy_r_r20 = (void *)&cpy_r_r19;
    int64_t cpy_r_r21[1] = {4};
    cpy_r_r22 = (void *)&cpy_r_r21;
    cpy_r_r23 = CPyStatics[47]; /* (('sys', 'sys', 'sys'),) */
    cpy_r_r24 = CPyStatic_globals;
    cpy_r_r25 = CPyStatics[33]; /* 'scc_algo.py' */
    cpy_r_r26 = CPyStatics[34]; /* '<module>' */
    cpy_r_r27 = CPyImport_ImportMany(cpy_r_r23, cpy_r_r20, cpy_r_r24, cpy_r_r25, cpy_r_r26, cpy_r_r22);
    if (!cpy_r_r27) goto CPyL18;
    cpy_r_r28 = CPyStatics[48]; /* ('perf_counter',) */
    cpy_r_r29 = CPyStatics[35]; /* 'time' */
    cpy_r_r30 = CPyStatic_globals;
    cpy_r_r31 = CPyImport_ImportFromMany(cpy_r_r29, cpy_r_r28, cpy_r_r28, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "<module>", 4, CPyStatic_globals);
        goto CPyL18;
    }
    CPyModule_time = cpy_r_r31;
    CPy_INCREF(CPyModule_time);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r32 = CPyModule_sys;
    cpy_r_r33 = CPyStatics[36]; /* 'setrecursionlimit' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "<module>", 7, CPyStatic_globals);
        goto CPyL18;
    }
    cpy_r_r35 = CPyStatics[39]; /* 1000000 */
    PyObject *cpy_r_r36[1] = {cpy_r_r35};
    cpy_r_r37 = (PyObject **)&cpy_r_r36;
    cpy_r_r38 = _PyObject_Vectorcall(cpy_r_r34, cpy_r_r37, 1, 0);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "<module>", 7, CPyStatic_globals);
        goto CPyL18;
    } else
        goto CPyL19;
CPyL10: ;
    cpy_r_r39 = CPyStatic_globals;
    cpy_r_r40 = CPyStatics[37]; /* '__name__' */
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("scc_algo.py", "<module>", 129, CPyStatic_globals);
        goto CPyL18;
    }
    if (likely(PyUnicode_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("scc_algo.py", "<module>", 129, CPyStatic_globals, "str", cpy_r_r41);
        goto CPyL18;
    }
    cpy_r_r43 = CPyStatics[38]; /* '__main__' */
    cpy_r_r44 = PyUnicode_Compare(cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r45 = cpy_r_r44 == -1;
    if (!cpy_r_r45) goto CPyL15;
    cpy_r_r46 = PyErr_Occurred();
    cpy_r_r47 = cpy_r_r46 != NULL;
    if (!cpy_r_r47) goto CPyL15;
    cpy_r_r48 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("scc_algo.py", "<module>", 129, CPyStatic_globals);
        goto CPyL18;
    }
CPyL15: ;
    cpy_r_r49 = cpy_r_r44 == 0;
    if (!cpy_r_r49) goto CPyL17;
    cpy_r_r50 = CPyDef_main();
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("scc_algo.py", "<module>", 130, CPyStatic_globals);
        goto CPyL18;
    }
CPyL17: ;
    return 1;
CPyL18: ;
    cpy_r_r51 = 2;
    return cpy_r_r51;
CPyL19: ;
    CPy_DECREF(cpy_r_r38);
    goto CPyL10;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_scc_algo = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_adj_list_rep = Py_None;
    CPyModule_collections = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_sys = Py_None;
    CPyModule_time = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[49];
const char * const CPyLit_Str[] = {
    "\006\badj_list\bvertices\vdefaultdict\005items\005Graph\005edges",
    "\004\026use_double_linked_list\006sorted\areverse\021The sizes of the ",
    "\006\022 largest SCCs are:\005print\ascc.txt\nload_graph\fperf_counter\000",
    "\a\ftime taken:\t\005{:{}}\003.3f\006format\005 msec\bbuiltins\024load_graph_from_file",
    "\b\fadj_list_rep\vcollections\004List\005Tuple\003Set\006typing\003sys\vscc_algo.py",
    "\005\b<module>\004time\021setrecursionlimit\b__name__\b__main__",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\0011000000",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    9, 3, 4, 8, 9, 1, 11, 2, 7, 25, 2, 7, 16, 1, 5, 3, 28, 29, 30, 3,
    32, 32, 32, 1, 46, 1, 17
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_scc_algo_internal = NULL;
CPyModule *CPyModule_scc_algo;
PyObject *CPyStatic_globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_adj_list_rep;
CPyModule *CPyModule_collections;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_sys;
CPyModule *CPyModule_time;
PyTypeObject *CPyType_kosaraju_scc_env;
PyObject *CPyDef_kosaraju_scc_env(void);
PyTypeObject *CPyType_dfs_finish_time_kosaraju_scc_obj;
PyObject *CPyDef_dfs_finish_time_kosaraju_scc_obj(void);
PyTypeObject *CPyType_dfs_collect_scc_size_kosaraju_scc_obj;
PyObject *CPyDef_dfs_collect_scc_size_kosaraju_scc_obj(void);
PyObject *CPyDef_dfs_finish_time_kosaraju_scc_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_dfs_finish_time_kosaraju_scc_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_dfs_finish_time_kosaraju_scc_obj_____call__(PyObject *cpy_r___mypyc_self__, CPyTagged cpy_r_vertex);
PyObject *CPyPy_dfs_finish_time_kosaraju_scc_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_dfs_collect_scc_size_kosaraju_scc_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_dfs_collect_scc_size_kosaraju_scc_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
CPyTagged CPyDef_dfs_collect_scc_size_kosaraju_scc_obj_____call__(PyObject *cpy_r___mypyc_self__, CPyTagged cpy_r_vertex);
PyObject *CPyPy_dfs_collect_scc_size_kosaraju_scc_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
tuple_T2IO CPyDef_kosaraju_scc(PyObject *cpy_r_graph);
PyObject *CPyPy_kosaraju_scc(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_reverse_graph(PyObject *cpy_r_graph);
PyObject *CPyPy_reverse_graph(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_display_largest_scc_sizes(PyObject *cpy_r_scc_sizes, CPyTagged cpy_r_num_largest);
PyObject *CPyPy_display_largest_scc_sizes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_main(void);
PyObject *CPyPy_main(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef___top_level__(void);
