/* Jay-Mark Pascua
   CS 202
   01/21/21
   Holds conversion functions
*/
#include "hw0.h"

double cpp_ftoc(const char* str) { // Converts Fahrenheit to Celsius
    double temp;

    std::string num = str; 
    std::istringstream checkIsNum(num); // Check if the input is a number
    checkIsNum >> temp;
    
    if (!checkIsNum) {
        std::cout << "The temperature is invalid" << std::endl;
    }
    else { // Converts Fahrenheit to Celsius
        temp = std::stod(str);
        temp -= 32;
        temp *= 5;
        temp /= 9;
        std::cout << str << " degrees Fahrenheit is " << temp << " degrees Celsius" << std::endl;
    }

    return temp;
}

double c_ctof(const char* str) { // Converts Celsius to Fahrenheit
    double temp;

    std::string num = str;
    std::istringstream checkIsNum(num); // Check if the input is a number
    checkIsNum >> temp;

    if (!checkIsNum) {
        std::cout << "The temperature is invalid" << std::endl;
    }
    else { // Converts Fahrenheit to Celsius
        char* end;
        temp = std::strtod(str, &end);
        temp *= 9;
        temp /= 5;
        temp += 32;
        std::cout << str << " degrees Celsius is " << temp << " degrees Fahrenheit" << std::endl;
    }

    return temp;
}