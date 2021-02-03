/* Jay-Mark Pascua
   CS 202
   01/28/2021
   Record time of different search algorithms on varying vector sizes
*/
#include "Time.h"


int main() {

    for (int i = 10; i <= 10000000; i *= 10) { // Creates vectors with i elements, up to 10M
        std::vector<int> v = makeVector(i);
        sortVector(v);
    }


}