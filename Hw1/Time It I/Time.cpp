/* Jay-Mark Pascua
   CS 202
   01/28/2021
   Holds function definitions
*/
#include "Time.h"

int findThis; // Number to find in vector

StopWatch::StopWatch() {
    _start = std::chrono::system_clock::now();
}


StopWatch::~StopWatch() {

}


void StopWatch::Restart() { // Restart clock
    _start = std::chrono::system_clock::now();
}


void StopWatch::Stop(StopWatch& timer) { // Stop clock + record time of event
    _end = std::chrono::system_clock::now();
    timer.printTime(timer);
}

void StopWatch::printTime(StopWatch& timer) {
    _elapsedTime = _end - _start;
    std::cout << "Elapsed time: " << _elapsedTime.count() << std::endl;
    std::cout << "Seconds: " << timer.getSeconds() << std::endl;
    std::cout << "Milliseconds: " << timer.getMilliseconds() << std::endl;
    std::cout << std::endl;
}


double StopWatch::getSeconds() {
    return std::chrono::duration_cast<std::chrono::seconds>(_end - _start).count();
}


double StopWatch::getMilliseconds() {
    return std::chrono::duration_cast<std::chrono::milliseconds>(_end - _start).count();
}


std::vector<int> makeVector(int n) { // Creates a vector with n elements
    std::vector<int> v;

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count(); // Random number generator
    std::mt19937 randNum(seed);

    for (int i = 0; i < n; i++) {
        v.push_back(randNum() % 100 + 1); // Vector of size n with random numbers between 1-100
    }
    return v;
}


std::vector<int> sortVector(std::vector<int>& v) { // Sorts vector in descending order
    std::sort(v.begin(), v.end(), [](int a, int b) {return a > b;});
    return v;
}


std::vector<int> reverseVector(std::vector<int>& v) { // Reverse elements in the vector
    std::reverse(v.begin(), v.end());
    return v;
}


std::vector<int>::iterator searchVector(std::vector<int>& v, int& findThis) {
    std::vector<int> v2(1, findThis);
    std::vector<int>::iterator it;
    it = std::search(v.begin(), v.end(), v2.begin(), v2.end());
    return it;
}
