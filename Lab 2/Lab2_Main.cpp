#include "Lab2.h""
#include <iostream>
#include <vector>

void Ref(Foo& f) {
	std::cout << "Passed by reference" << std::endl;
	std::cout << "Value returned: " << f.getNum() << std::endl;
}

int Val(Foo f) {
	std::cout << "Passed by value" << std::endl;
	std::cout << "Value returned: " << f.getNum() << std::endl;
	return f.getNum();
}

int main() {
	std::vector<Foo> list;

	Foo test1; // Constructor
	list.push_back(test1); // Puts default constructor in vector

	Foo testCopy = test1; // Copy constructor, pass by reference to const
	list.push_back(testCopy);

	Foo testRef(1); // Pass by reference
	Ref(testRef);
	list.push_back(testRef);

	Foo testVal(2); // Pass by value
	Val(testVal);
	list.push_back(testVal);

	Foo test5(3);
	list.push_back(test5);

	std::cout << "# of elements in vector of objects: " << list.size() << std::endl;

}