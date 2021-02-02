/* Jay-Mark Pascua
   CS 202
   01/28/2021
   Holds function definitions
*/
#include "Time.h"

StopWatch::StopWatch() {
    std::chrono::time_point < std::chrono::system_clock > start; // Set a time point at the start and end
    start = std::chrono::system_clock::now();
    std::chrono::duration<double> startTime;
    _startTime = startTime.count();
}


StopWatch::~StopWatch() {

}


// Restart clock
void StopWatch::Restart() { 

}


// Stop clock + record time of event
void StopWatch::Stop() {

}