#include "Lab2.h"
#include <iostream>

Foo::Foo() {
	std::cout << "Default constructor created" << std::endl;
}


Foo::Foo(int x) {
	std::cout << "Constructor with parameter int created" << std::endl;
	_num = x;
}


Foo::Foo(const Foo& f) {
	std::cout << "Copy constructor created, passed by reference to const" << std::endl;
	_num = f._num;
}


Foo::~Foo() {
	std::cout << "Destructor called" << std::endl;
}