/* Jay-Mark Pascua
   CS 202
   01/28/2021
   Read Gutenberg Project books 
*/

#include <fstream>
#include <list>
#include "Time.h"

std::string randomWord() { // Returns a random word to find in book
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count(); // Random number generator
    std::mt19937 randNum(seed);

    std::ifstream dictionary;
    dictionary.open("Dictionary.txt");

    std::vector<std::string> v;
    std::string words; // Dictionary words
    
    while (true) {
        dictionary >> words;
        v.push_back(words);

        if (dictionary.eof()) {
            break;
        }
    }

    int rNum = randNum() % v.size() + 1;
    std::string wordToFind = v[rNum];
    return wordToFind;
}

void vectorFind(std::vector<std::string>& v) { // Find random number in vector
    StopWatch Timer;
    
    std::string findWord = randomWord();

    std::cout << "FINDING: " << findWord << std::endl;
    Timer.Start();
    std::vector<std::string>::iterator it = std::find(v.begin(), v.end(), findWord);
    if (it != v.end()) {
        std::cout << "Found " << findWord << std::endl;
        Timer.Stop(Timer);
    }
    else
        std::cout << "Word not found" << std::endl;
}

void sortStringVector(std::vector<std::string>& v) { // Sorts vector Alphabetically
    StopWatch Timer;
    
    std::cout << "SORTING VECTOR" << std::endl;
    Timer.Start();
    std::sort(v.begin(), v.end(), [](std::string a, std::string b) {return a > b;});
    Timer.Stop(Timer);
}

void timeVector(std::ifstream& book) { // Read file's words into vector of strings
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
    vectorFind(v);
    sortStringVector(v);
}

void listSort(std::list<std::string>& list) { // Sorts list Alphabetically
    StopWatch Timer;

    std::cout << "SORTING LIST" << std::endl;
    Timer.Start();
    list.sort([](std::string a, std::string b) {return a > b;});
    Timer.Stop(Timer);
}

void listFind(std::list<std::string>& list, std::string findWord) { // Finds random word in list
    StopWatch Timer;

    std::cout << "FINDING: " << findWord << std::endl;
    Timer.Start();
    std::list<std::string>::iterator it = std::find(list.begin(), list.end(), findWord);
    if (it != list.end()) {
        std::cout << "Found " << findWord << std::endl;
        Timer.Stop(Timer);
    }
    else
        std::cout << "Word not found" << std::endl;

}

void timeList(std::ifstream& book, std::string findWord) { // Times operations on list
    StopWatch Timer;
    std::list<std::string> list;
    std::string word;

    Timer.Start();
    while (true) {
        book >> word;
        list.push_back(word);

        if (book.eof()) {
            Timer.Stop(Timer);
            book.close();
            break;
        }
    }
    listFind(list, findWord);
    listSort(list);
}

void gutenbergProject() {
    std::ifstream book;
    std::vector<std::string> v;

    std::cout << "////////////READING INTO VECTOR////////////" << std::endl;

    std::cout << "\n////////////BOOK 1////////////" << std::endl;
    book.open("Book1.txt");
    timeVector(book);
    

    std::cout << "\n////////////BOOK 2////////////" << std::endl;
    book.open("Book2.txt");
    timeVector(book);

    std::cout << "\n////////////BOOK 3////////////" << std::endl;
    book.open("Book3.txt");
    timeVector(book);

    std::cout << "\n////////////BOOK 4////////////" << std::endl;
    book.open("Book4.txt");
    timeVector(book);

    std::cout << "\n////////////BOOK 5////////////" << std::endl;
    book.open("Book5.txt");
    timeVector(book);

    ////////////////////////////////////////////////////////////////////
    std::list<std::string> list;
    std::cout << "////////////READING INTO LIST////////////" << std::endl;

    std::cout << "\n////////////BOOK 1////////////" << std::endl;
    book.open("Book1.txt");
    timeList(book, randomWord());

    std::cout << "\n////////////BOOK 2////////////" << std::endl;
    book.open("Book2.txt");
    timeList(book, randomWord());

    std::cout << "\n////////////BOOK 3////////////" << std::endl;
    book.open("Book3.txt");
    timeList(book, randomWord());

    std::cout << "\n////////////BOOK 4////////////" << std::endl;
    book.open("Book4.txt");
    timeList(book, randomWord());

    std::cout << "\n////////////BOOK 5////////////" << std::endl;
    book.open("Book5.txt");
    timeList(book, randomWord());


}