/* Jay-Mark Pascua
   CS202
   02/04/21
   Writing functions without using standard library functions
*/
#include <iostream>

char* strd(const char* s) { // copies a C-style string into memory it allocates dynamically(using new)
    char* copy = new char[10];
    for (int i = 0; i < 10; i++) {
        copy[i] = s[i];
    }

    std::cout << "Copied c style string to memory at: " << &copy << std::endl;

    char* letter = (char*)s;

    return letter;
}

char* findx(const char* s, const char* x) { // finds the first occurrence of the C - style string x in s

    return 0;
}

int main() {
    const char* s = "chased";
    const char* x = "The monkey chased a banana-shaped boy";
    
    std::cout << "Passing " << s << " to strd function" << std::endl;
    std::cout << "strd function returns " << *strd(s) << std::endl; // Points to the 1st letter of the word

    return 0;
}