#include <iostream>
#include <memory>
#include "Lab2.h"

int main(int argc, char** argv) {
	Foo obj1;
	Foo* rawPtr = new Foo;

	std::cout << "Creating raw pointer to object" << std::endl;
	std::cout << rawPtr << std::endl;

	std::cout << "Creating unique pointer to object with int 10" << std::endl;
	std::unique_ptr<Foo> uPtr = std::make_unique <Foo>(10);

	std::cout << "Creating copied unique pointer" << std::endl;
	std::unique_ptr<Foo> uPtr2 = std::move(uPtr);
	std::cout << "Calling .getNum() function for copied pointer: " << uPtr2->getNum() << std::endl;

	std::shared_ptr<Foo> sPtr = std::make_shared<Foo> (20);
	std::shared_ptr<Foo> sPtr2 = sPtr;
	std::cout << "Shared pointer value: " << sPtr->getNum() << std::endl;
	std::cout << "Second shared pointer value: " << sPtr2->getNum() << std::endl;

	delete rawPtr;
}