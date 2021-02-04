/* Jay-Mark Pascua
   CS 202
   01/28/2021
   Record time of different search algorithms on varying vector sizes
*/
#include "Time.h"


int main() {
    StopWatch Timer;
    /*
    for (int i = 10; i <= 10000000; i *= 10) { // Creates vectors with i elements, up to 10M
        std::cout << "VECTOR WITH " << i << " ELEMENTS" << std::endl;
        std::vector<int> v = makeVector(i);

        int findThis = v[1]; // Sets a number in the vector to be found in search algorithm

        //////////////////////////////////////////////////
        std::cout << "Sorting" << std::endl;
        Timer.Start();
        sortVector(v);
        Timer.Stop(Timer);

        //////////////////////////////////////////////////
        std::cout << "Reversing" << std::endl;
        Timer.Start();
        reverseVector(v);
        Timer.Stop(Timer); 

        //////////////////////////////////////////////////
        std::cout << "Searching for " << findThis << std::endl;
        Timer.Start();
        std::vector<int>::iterator it = searchVector(v, findThis);
        Timer.Stop(Timer);

        if (it != v.end()) {
            std::cout << "Found element " << findThis << " at position " << (it - v.begin()) << std::endl;
        }
        else 
            std::cout << "Element not found" << std::endl;

        std::cout  << std::endl;
        //////////////////////////////////////////////////
        std::cout << "Binary Searching for " << findThis << std::endl;
        Timer.Start();
        std::binary_search(v.begin(), v.end(), findThis);
        Timer.Stop(Timer);
        if (std::binary_search(v.begin(), v.end(), findThis))
            std::cout << findThis << " found in this vector" << std::endl;
        else 
            std::cout << "Element not found" << std::endl;

        std::cout << std::endl;
        system("PAUSE");
    


    }*/

    // Starts Time It II Program
    gutenbergProject();

}