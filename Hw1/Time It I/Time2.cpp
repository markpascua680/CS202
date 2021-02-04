/* Jay-Mark Pascua
   CS 202
   01/28/2021
   Read Gutenberg Project books 
*/

#include <fstream>
#include "Time.h"

std::vector<std::string> bookMakeVector(std::ifstream& book) { // Read file's words into vector of strings
    StopWatch Timer;
    std::vector<std::string> v;
    std::string word;

    Timer.Start();
    while (true) { 
        book >> word;
        v.push_back(word);

        if (book.eof()) {
            Timer.Stop(Timer);
            book.close();
            break;
        }

    }
    return v;
}

void vectorFind(std::vector<std::string>& v) { // Find random number in vector
    StopWatch Timer;

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count(); // Random number generator
    std::mt19937 randNum(seed);
    int rNum = randNum() % v.size() + 1;

    std::string findWord = v[rNum];

    std::cout << "FINDING: " << findWord << std::endl;
    Timer.Start();
    std::vector<std::string>::iterator it = std::find(v.begin(), v.end(), findWord);
    if (it != v.end()) {
        std::cout << findWord << " found" << std::endl;
        Timer.Stop(Timer);
    }
    else
        std::cout << "Word not found" << std::endl;
}

void gutenbergProject() {
    std::ifstream book;
    std::vector<std::string> v;

    std::cout << "READING INTO VECTOR" << std::endl;

    std::cout << "\nBOOK 1" << std::endl;
    book.open("Book1.txt");
    v = bookMakeVector(book);
    vectorFind(v);

    std::cout << "\nBOOK 2" << std::endl;
    book.open("Book2.txt");
    v = bookMakeVector(book);
    vectorFind(v);

    std::cout << "\nBOOK 3" << std::endl;
    book.open("Book3.txt");
    v = bookMakeVector(book);
    vectorFind(v);

    std::cout << "\nBOOK 4" << std::endl;
    book.open("Book4.txt");
    v = bookMakeVector(book);
    vectorFind(v);

    std::cout << "\nBOOK 5" << std::endl;
    book.open("Book5.txt");
    v = bookMakeVector(book);
    vectorFind(v);

}