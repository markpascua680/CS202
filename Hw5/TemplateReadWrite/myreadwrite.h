#ifndef MYREADWRITE_H
#define MYREADWRITE_H
#include <iostream>
#include <fstream>

template <typename Type>
void myWrite(std::ofstream& ofile, Type num) {
	ofile.write(reinterpret_cast<const char*>(&num), sizeof(num));
}

#endif // !MYREADWRITE_H
