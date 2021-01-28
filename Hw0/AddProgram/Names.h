#ifndef NAMES_H
#define NAMES_H
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

void InputNames(vector<string>& names);

bool DoesNameExist(const string& nameToFind, const vector<string> names);

void PrintNames(const vector<string>& names);

string CorrectCapitalize(string& name);

#endif // !NAMES_H
