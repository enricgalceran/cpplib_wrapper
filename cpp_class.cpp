#include "cpp_class.h"

#include <iostream>

CppClass::CppClass():
    a_(42)
{

}

CppClass::~CppClass()
{

}

void CppClass::do_work()
{
    std::cout << this->a_ << std::endl;
}
