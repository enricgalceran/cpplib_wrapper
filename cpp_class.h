/**
 * cpp_class.h
 *
 * Declares a simple C++ class to be wrapped by a C API as an example.
 *
 */

#ifndef CPP_CLASS_H_
#define CPP_CLASS_H_


class CppClass {
public:
    CppClass();
    ~CppClass();

    void do_work();

private:
    int a_;
};


#endif /* CPP_CLASS_H_ */
