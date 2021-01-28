/* Jay-Mark Pascua
   CS 201
   02/04/2020
   Outputs 10 names from the user and outputs the one with the most letters
*/

#include "Names.h"


int main(int argc, char** argv)
{
	vector<string> names;
	string nameToFind;

	InputNames(names);

	cout << "Search for a name: ";
	std::getline(cin, nameToFind);
	DoesNameExist(CorrectCapitalize(nameToFind), names);

	PrintNames(names);



	return 0;
}