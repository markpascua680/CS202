/* Jay-Mark Pascua
   CS202
   02/11/2021
   Tells the order in which static storage, the stack, and the free store are laid out in memory
*/
#include <iostream>



void printPointer(int& i) {
    int* iptr = &i;
    // the unary * operator dereferences the pointer
    std::cout << "i = " << *iptr << "\n";
    std::cout << "& i = " << iptr << "\n" << std::endl;
}

void testMemory(const int& x, const int& y, const int& z) { // Test if memory is increasing/decreasing
    if (&x > &y && &x > &z && &y > &z) {
        std::cout << "Memory is increasing with subsequent storage\n" << std::endl;
    }
    else if (&x < &y && &x < &z && &y < &z) {
        std::cout << "Memory is decreasing with subsequent storage\n" << std::endl;
    }
}

void stack() { // Create 3 stack stored variables, print addresses
    int stack = 1;
    printPointer(stack);
    int stack2 = 1;
    printPointer(stack2);
    int stack3 = 1;
    printPointer(stack3);

    testMemory(stack, stack2, stack3);
}

void stat() { // Create 3 static stored variables, print addresses
    static int stat = 1;
    printPointer(stat);
    static int stat2 = 1;
    printPointer(stat2);
    static int stat3 = 1;
    printPointer(stat3);

    testMemory(stat, stat2, stat3);
}

void fStore() { // Create 3 free store stored variables, print addresses
    int* store = new int[3];
    store[0] = 1;
    store[1] = 1;
    store[2] = 1;

    printPointer(store[0]);
    printPointer(store[1]);
    printPointer(store[2]);

    testMemory(store[0], store[1], store[2]);
}

int main() {
    std::cout << "Stack" << std::endl;
    stack();

    std::cout << "Static" << std::endl;
    stat();

    std::cout << "Free Store" << std::endl;
    fStore();
}