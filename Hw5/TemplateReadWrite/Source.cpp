#include "myreadwrite.h"

int main() {

	std::ofstream ofile("data.dat");
    double d = 13.3;
    myWrite(ofile, d);
    int x = 5;
    myWrite(ofile, x);

	return 0;
}