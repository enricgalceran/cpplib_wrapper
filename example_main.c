/**
 * This example program shows how to use a shared library (.so file) that
 * provides a C API for a C++ library. See libraries/cpplib_wrapper to
 * see an example of a C wrapper around a C++ library.
 */

#include "wrapper.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    CppClass *c = cpp_class_create();
    printf("Successfully using C++ object from C, pointer: %p\n", (void*)c);
    cpp_class_do_work(c);
    cpp_class_destroy(c);
    return 0;
}
