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

class StopWatch
{
public:
	StopWatch();
	~StopWatch();

    void Restart(); // Restart clock
    void Stop(); // Stop clock + record time of event

    double getTime();
    double getSeconds();
    double getMilliseconds();

private:
    std::chrono::duration<double> _elapsedTime;
    std::chrono::time_point < std::chrono::system_clock > _start, _end; // Set a time point for start and end
};

#endif // !TIME_H
