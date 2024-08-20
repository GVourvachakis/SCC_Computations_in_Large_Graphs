#ifndef MYPYC_NATIVE_H
#define MYPYC_NATIVE_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T2IO
#define MYPYC_DECLARED_tuple_T2IO
typedef struct tuple_T2IO {
    CPyTagged f0;
    PyObject *f1;
} tuple_T2IO;
#endif

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_graph;
    PyObject *_finish_stack;
    PyObject *_reversed_graph;
    PyObject *_visited;
    PyObject *_dfs_finish_time;
    PyObject *_dfs_collect_scc_size;
    PyObject *_node;
    PyObject *_scc_sizes;
} scc_algo___kosaraju_scc_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} scc_algo___dfs_finish_time_kosaraju_scc_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} scc_algo___dfs_collect_scc_size_kosaraju_scc_objObject;

#endif
