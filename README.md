# cpplib_wrapper
Example of how to create a plain C wrapper that calls C++ code.
This is useful when working in a C-only environment and willing
to use C++ code from a separate library. This repo provides an
example of how to build the C++ code into a shared library and
of how to write a C-only wrapper that calls and uses the C++
code.

## Overview
`cpp_class[.h|.cpp]` define a simple example C++ class with
member functions that we want to call from C-only code.

`wrapper[.h|.cpp]` define a C-only interface that provides
plain old functions that call the C++ code in `cpp_class`.

Both `cpp_class` and `wrapper` get compiled (using g++) into
a shared library named `libcpplib_wrapper.so` by `Makefile`.

`example_main.c` is a C-only example program that is linked
with `libcpplib_wrapper.so` and that can call the C++ code
in `cpp_class` using the API provided by `wrapper`.

Running `make` using `Makefile` will generate the shared
library `libcpplib_wrapper.so` and the binary `example_main`.

## Usage example
...
