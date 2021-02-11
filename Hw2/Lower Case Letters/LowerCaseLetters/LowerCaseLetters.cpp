/* Jay-Mark Pascua
   CS202
   02/10/2021
   Change upper case letters to lower case
*/
#include <iostream>

void to_lower(char* s) { // Converts upper case letters to lower case
    const char* upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char* lower = "abcdefghijklmnopqrstuvwxyz";
    char* sentence = s;

    int it = 0; // Iterator
    
    while (*s != '\0') { // Look at each letter to change

        if (*s >= 'A' && *s <= 'Z') { // If a letter in sentence is a capital letter

            for (int i = 0; i < 26; i++) { // Compare each upper case letter in sentence to find + change to lower case

                if (*s == upper[i]) { // If the letter in sentence = capital, change to lower
                    sentence[it] = lower[i];
                }
            }
        }
        it++;
        s++;
    }

    std::cout << "New Sentence: " << sentence << std::endl;

}

int main() {
    char sentence[] = "Computer Science hURts mY bRaiN";

    std::cout << "Sentence to change: " << sentence << std::endl;

    to_lower(sentence);


}