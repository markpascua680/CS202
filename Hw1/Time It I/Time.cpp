/* Jay-Mark Pascua
   CS 202
   01/28/2021
   Holds function definitions
*/
#include "Time.h"

StopWatch::StopWatch() {
    _start = std::chrono::system_clock::now();
}


StopWatch::~StopWatch() {

}


void StopWatch::Restart() { // Restart clock
    _start = std::chrono::system_clock::now();
}


void StopWatch::Stop() { // Stop clock + record time of event
    _end = std::chrono::system_clock::now();
}

double StopWatch::getTime() {
    _elapsedTime = _end - _start;
    return _elapsedTime.count();
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