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
            std::cout << "Finished Reading" << std::endl;
            Timer.Stop(Timer);
            book.close();
            break;
        }

    }
    return v;
}

void gutenbergProject() {
    std::ifstream book;

    std::cout << "READING INTO VECTOR" << std::endl;
    book.open("Book1.txt");
    bookMakeVector(book);
    book.open("Book2.txt");
    bookMakeVector(book);
    book.open("Book3.txt");
    bookMakeVector(book);
    book.open("Book4.txt");
    bookMakeVector(book);
    book.open("Book5.txt");
    bookMakeVector(book);

}