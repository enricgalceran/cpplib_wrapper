/**
 * c_wrapper.h
 *
 * Declares a simple C API wrapper around a C++ class.
 *
 * This wrapper is compiled into a shared library (.so)
 * which can be then called from plain old C code.
 *
 * See an example program using this library in
 * applications/examples/cpplib_wrapper_example.c
 */

#ifndef C_WRAPPER_H_
#define C_WRAPPER_H_


#ifdef __cplusplus
    #include "cpp_class.h"
extern "C" {
#else
    typedef struct CppClass CppClass;
#endif

CppClass *cpp_class_create();

void cpp_class_destroy(CppClass *c);

void cpp_class_do_work(CppClass *c);

#ifdef __cplusplus
}
#endif


#endif /* C_WRAPPER_H_ */
