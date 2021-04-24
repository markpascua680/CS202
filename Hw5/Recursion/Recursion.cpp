#include <iostream>

int fib(const int& n) { // Recursion
	
	if (n == 1)
		return 1;
	else if (n > 1) {
		return fib(n - 1) + fib(n - 2);
	}
	else
		return 0;
}

int fib_loop(const int& n) {
	int first = 0;
	int second = 1;
	int third = first + second;
	if (n == 1)
		return 1;
	else if (n > 1) {

		for (int i = 1; i < n; i++) {
			third = first + second;
			first = second;
			second = third;
		}
		return third;
	}
	else
		return 0;
}

int main() {

	std::cout << "FIBONACCI SEQUENCE USING RECURSION: " << std::endl;
	std::cout << fib(12) << std::endl;

	std::cout << "FIBONACCI SEQUENCE WITHOUT USING RECURSION: " << std::endl;
	std::cout << fib_loop(12) << std::endl;

	return 0;
}