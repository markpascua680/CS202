/* Jay-Mark Pascua
   CS 202
   01/28/2021

*/
#include "Time.h"

int main() {
    StopWatch Timer;
    for (int i = 0; i < 1000; i++) {
        std::cout << i << std::endl;
    }
    Timer.Stop();
    std::cout << "Elapsed time: " << Timer.getTime() << std::endl;
}