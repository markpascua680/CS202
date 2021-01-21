#include "Lab2.h"
#include <iostream>

Foo::Foo() {
	std::cout << "Default constructor created" << std::endl;
}


Foo::Foo(int x) {
	std::cout << "Another constructor created" << std::endl;
	num = x;
}


Foo::Foo(const Foo& f) {
	std::cout << "Copy constructor created, passed by reference to const" << std::endl;
}


Foo::~Foo() {
	std::cout << "Destructor called" << std::endl;
}