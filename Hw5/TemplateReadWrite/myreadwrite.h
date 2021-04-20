#ifndef MYREADWRITE_H
#define MYREADWRITE_H
#include <iostream>
#include <fstream>

template <typename Type>
void myWrite(std::ofstream& ofile, const Type& num) {
	ofile.write(reinterpret_cast<const char*>(&num), sizeof(num));
}

template <typename Type>
void myRead(std::ifstream& ifile, Type& num) {
	ifile.read(reinterpret_cast<char*>(&num), sizeof(num));
}

#endif // !MYREADWRITE_H
