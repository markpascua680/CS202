/* Jay-Mark Pascua
   CS 202
   01/28/2021
   Holds function declarations
*/
#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <chrono>
#include <algorithm>
#include <random>
#include <vector>

std::vector<int> makeVector(int n); // Creates a vector with n elements
std::vector<int> sortVector(std::vector<int>& v); // Sorts vector in descending order
std::vector<int> reverseVector(std::vector<int>& v); // Reverse elements in the vector
std::vector<int>::iterator searchVector(std::vector<int>& v, int& findThis); // Searches vector for an element

class StopWatch
{
public:
	StopWatch();
	~StopWatch();

    void Restart(); // Restart clock
    void Stop(StopWatch& timer); // Stop clock + record time of event

    void printTime(StopWatch& timer);
    double getSeconds();
    double getMilliseconds();

private:
    std::chrono::duration<double> _elapsedTime;
    std::chrono::time_point < std::chrono::system_clock > _start, _end; // Set a time point for start and end
};

#endif // !TIME_H
