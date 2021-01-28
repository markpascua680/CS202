#include "Names.h"

void InputNames(vector<string>& names) // User enters list of names
{
	for (int i = 0; i < 10; i++)
	{
		string name;
		cout << "Please enter a name: ";
		std::getline(cin, name);
		names.push_back(CorrectCapitalize(name));
	}
	cout << "\n" << endl;
}


string CorrectCapitalize(string& name) { // Correctly formats input name
	std::transform(name.begin(), name.end(), name.begin(), ::tolower);
	name[0] = toupper(name[0]);
	return name;
}



void PrintNames(const vector<string>& names) // Prints the list of names
{
	cout << "Names listed: " << endl;

	for (int i = 0; i < 10; i++)     
	{
		cout << names[i] << " ";
	}

	int nameLength = 0;					 // Marks the name with the most letters
	string name;
	cout << "\nThe name with the most letters: " << endl;

	for (int i = 0; i < 10; i++) // Compares name lengths
	{
		if (names[i].size() > nameLength)
		{
			nameLength = names[i].size();
			name = names[i];
		}
	}

	cout << name;

}



bool DoesNameExist(const string& nameToFind, const vector<string> names) // Searches for name indicated by user
{
	for (int i = 0; i < 10; i++)
	{
		if (nameToFind == names[i])
		{
			cout << "Name found at sector " << i << ": " << names[i] << "\n" << endl;
			return true;
		}
	}

	cout << "Name does not exist.\n" << endl;
	return false;
}