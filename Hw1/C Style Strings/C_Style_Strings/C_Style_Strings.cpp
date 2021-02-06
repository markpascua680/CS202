/* Jay-Mark Pascua
   CS202
   02/04/21
   Writing functions without using standard library functions
*/
#include <iostream>

char* strd(const char* s) { // copies a C-style string into memory it allocates dynamically(using new)
    char* copy = new char;

    copy = (char*)s;

    std::cout << "Copied c style string to memory address: " << &copy << std::endl;

    return copy;
}

char* findx(const char* s, const char* x) { // finds the first occurrence of the C - style string s in x
    int i = 0;
    while (true) {
        if (s == x + i) {
            std::cout << "\"" << s << "\" found at " << x+i << std::endl;
            break;
        }
        i++;
    }

    return 0;
}

int main() {
    const char* s = "chased";
    const char* x = "The monkey chased a banana-shaped boy";
    
    std::cout << "Passing " << s << " to strd function" << std::endl;
    std::cout << "strd function returns " << *strd(s) << std::endl; // Points to the 1st letter of the word

    std::cout << "Finding \"" << s << "\" in \"" << x << "\"" << std::endl;
    findx(s, x);

    return 0;
}