/* Jay-Mark Pascua
   CS 202
   01/28/2021
   Record time of different search algorithms on varying vector sizes
*/
#include "Time.h"


int main() {

    StopWatch Timer;

    std::vector<int> v10 = makeVector(10);

    for (auto x : v10) {
        std::cout << x << std::endl;
    }
 
    Timer.Stop();
    std::cout << "Elapsed time: " << Timer.getTime() << std::endl; 
    std::cout << "Seconds: " << Timer.getSeconds() << std::endl;
    std::cout << "Milliseconds: " << Timer.getMilliseconds() << std::endl; 
}