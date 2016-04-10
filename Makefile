CC             := @gcc
CXX            := @g++
LIB_SRCS       := $(shell find . -name "*.cpp")
LIB_OBJS       := $(LIB_SRCS:%.cpp=%.o)
CPPLIB_WRAPPER  = libcpplib_wrapper.so

all: $(CPPLIB_WRAPPER) example_main

$(CPPLIB_WRAPPER): $(LIB_OBJS)
	$(CXX) -shared -o $@ $^

# Could also use -fPIC, see http://stackoverflow.com/questions/3544035/what-is-the-difference-between-fpic-and-fpic-gcc-parameters
./%.o: ./%.cpp
	$(CXX) -fpic -c $< -o $@

example_main:
	$(CC) -L./ example_main.c -o example_main -lcpplib_wrapper

# Remember to set LD_LIBRARY_PATH before running 'example_main', e.g.:
# export LD_LIBRARY_PATH=/home/username/cpplib_wrapper:$LD_LIBRARY_PATH

clean:
	rm -f *.o *.d $(CPPLIB_WRAPPER) example_main

-include $(wildcard *.d)

