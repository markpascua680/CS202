/* Jay-Mark Pascua
   CS 202
   01/28/2021

*/
#include "Time.h"

int main() {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::mt19937 randNum(seed); 
    std::cout << randNum() << std::endl;
    /*
    StopWatch Timer;

    for (int i = 0; i < 1000; i++) {
        std::cout << i << std::endl;
    }

    Timer.Stop();
    std::cout << "Elapsed time: " << Timer.getTime() << std::endl; 
    std::cout << "Seconds: " << Timer.getSeconds() << std::endl;
    std::cout << "Milliseconds: " << Timer.getMilliseconds() << std::endl; */
}