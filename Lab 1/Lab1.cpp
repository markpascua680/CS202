#include <iostream>
#include <vector>


int addFive(int& a) {
	std::cout << "X is " << a << std::endl;
	a += 5;
	std::cout << "X is now " << a << std::endl;
	return a;
}


int main() {

	int x = 0;
	std::cout << "X is set to 0" << std::endl;


	std::cout << "\nIf/Else" << std::endl;
	if (x == 1) {
		std::cout << "X = 1" << std::endl;
	}
	else
		std::cout << "X = " << x << std::endl;


	std::cout << "\nSwitch" << std::endl;
	switch (x) {
	case 0: std::cout << "X = " << x << std::endl;
		break;
	case 1: std::cout << "X = " << x << std::endl;
	};


	std::cout << "\nFunction Call addFive" << std::endl;
	addFive(x);


	std::cout << "\nWhile" << std::endl;
	while (x != 0) {
		std::cout << "X = " << x << std::endl;
		x--;
	}


	std::cout << "\nDo/While" << std::endl;
	do {
		std::cout << "X = " << x << std::endl;
		x++;
	} while (x != 5);


	std::cout << "\nFor Loop" << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << "Print 5 times" << std::endl;
	}


	std::cout << "\nRanged Based For Loop" << std::endl;
	std::vector<std::string> list{"One","Two","Three","Four","Five"};
	for (int i = 0; i < list.size(); i++) {
		std::cout << list[i] << std::endl;
	}
}