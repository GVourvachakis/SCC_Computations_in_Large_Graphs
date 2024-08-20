#ifndef MYPYC_NATIVE_INTERNAL_H
#define MYPYC_NATIVE_INTERNAL_H
#include <Python.h>
#include <CPy.h>
#include "__native.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatics[49];
extern const char * const CPyLit_Str[];
extern const char * const CPyLit_Bytes[];
extern const char * const CPyLit_Int[];
extern const double CPyLit_Float[];
extern const double CPyLit_Complex[];
extern const int CPyLit_Tuple[];
extern const int CPyLit_FrozenSet[];
extern CPyModule *CPyModule_scc_algo_internal;
extern CPyModule *CPyModule_scc_algo;
extern PyObject *CPyStatic_globals;
extern CPyModule *CPyModule_builtins;
extern CPyModule *CPyModule_adj_list_rep;
extern CPyModule *CPyModule_collections;
extern CPyModule *CPyModule_typing;
extern CPyModule *CPyModule_sys;
extern CPyModule *CPyModule_time;
extern PyTypeObject *CPyType_kosaraju_scc_env;
extern PyObject *CPyDef_kosaraju_scc_env(void);
extern PyTypeObject *CPyType_dfs_finish_time_kosaraju_scc_obj;
extern PyObject *CPyDef_dfs_finish_time_kosaraju_scc_obj(void);
extern PyTypeObject *CPyType_dfs_collect_scc_size_kosaraju_scc_obj;
extern PyObject *CPyDef_dfs_collect_scc_size_kosaraju_scc_obj(void);
extern PyObject *CPyDef_dfs_finish_time_kosaraju_scc_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
extern PyObject *CPyPy_dfs_finish_time_kosaraju_scc_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef_dfs_finish_time_kosaraju_scc_obj_____call__(PyObject *cpy_r___mypyc_self__, CPyTagged cpy_r_vertex);
extern PyObject *CPyPy_dfs_finish_time_kosaraju_scc_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_dfs_collect_scc_size_kosaraju_scc_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
extern PyObject *CPyPy_dfs_collect_scc_size_kosaraju_scc_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern CPyTagged CPyDef_dfs_collect_scc_size_kosaraju_scc_obj_____call__(PyObject *cpy_r___mypyc_self__, CPyTagged cpy_r_vertex);
extern PyObject *CPyPy_dfs_collect_scc_size_kosaraju_scc_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern tuple_T2IO CPyDef_kosaraju_scc(PyObject *cpy_r_graph);
extern PyObject *CPyPy_kosaraju_scc(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_reverse_graph(PyObject *cpy_r_graph);
extern PyObject *CPyPy_reverse_graph(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef_display_largest_scc_sizes(PyObject *cpy_r_scc_sizes, CPyTagged cpy_r_num_largest);
extern PyObject *CPyPy_display_largest_scc_sizes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef_main(void);
extern PyObject *CPyPy_main(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef___top_level__(void);
#endif
