#include <iostream>
#include "Time.h"

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

int ack(const int& m, const int& n) {
	if (m == 0) {
		return n + 1;
	}
	
	if (m > 0 && n == 0) {
		return ack(m - 1, 1);
	}

	if (m > 0 && n > 0) {
		return ack(m - 1, ack(m, n - 1));
	}
	return 0;
}

int main() {
	StopWatch timer;

	std::cout << "FIBONACCI SEQUENCE USING RECURSION: " << std::endl;
	std::cout << fib(12) << std::endl;

	std::cout << "FIBONACCI SEQUENCE WITHOUT USING RECURSION: " << std::endl;
	std::cout << fib_loop(12) << std::endl;

	std::cout << "ACKERMANN'S FUNCTION: " << std::endl;

	for (int m = 0; m < 5; m++) {
		std::cout << "\nM = " << m << std::endl;
		std::cout << "RESULT: ";

		std::cout << ack(m, 0) << std::endl;
		timer.Start();
		ack(m, 0);
		timer.Stop(timer);
		std::cout << std::endl;
	}


	return 0;
}