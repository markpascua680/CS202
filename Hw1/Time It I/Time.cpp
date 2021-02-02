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

}


void StopWatch::Stop() { // Stop clock + record time of event
    _end = std::chrono::system_clock::now();
}

double StopWatch::getTime() {
    _elapsedTime = _end - _start;
    return _elapsedTime.count();
}