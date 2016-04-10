#include "wrapper.h"

CppClass *cpp_class_create()
{
    CppClass *c = new CppClass;
    return c;
    //return (void*)c;
}

void cpp_class_destroy(CppClass *c)
{
    delete c;
}

void cpp_class_do_work(CppClass *c)
{
    c->do_work();
}
