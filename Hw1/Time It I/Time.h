/* Jay-Mark Pascua
   CS 202
   01/28/2021
   Holds function declarations
*/
#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <chrono>

class StopWatch
{
public:
	StopWatch();
	~StopWatch();

    void Restart();
    void Stop();

    double getStart() {
        return _startTime;
    }

private:
    double _elapsedTime = 0;
    double _startTime = 0;
    double _endTime;
};

// Constructor that starts the clock
// Function stopwatch(), measures time
// Function Start(), restarts the clock
// Function Stop(), records the end time for an event
// Make two other methods that reports time in seconds and milliseconds as a double

#endif // !TIME_H
