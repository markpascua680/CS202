#include "Lab2.h""
#include <iostream>
#include <vector>

void Ref(Foo& f) {
	std::cout << "Passed by reference" << std::endl;
	std::cout << "Value returned: " << f.getNum() << std::endl;
}

void Val(Foo f) {
	std::cout << "Passed by value" << std::endl;
	std::cout << "Value returned: " << f.getNum() << std::endl;
}

int main() {

	Foo test1; // Constructor

	Foo testCopy = test1; // Copy constructor, pass by reference to const

	Foo testRef(1); // Pass by reference
	Ref(testRef);

	Foo testVal(2); // Pass by value
	Val(testVal);

	Foo test5(3);

	std::vector<Foo> list = { test1,testCopy,testRef,testVal,test5 };

	for (auto x : list) {
		std::cout << "Values in vector: " << x.getNum() << std::endl;
	}
}