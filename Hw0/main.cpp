/* Jay-Mark Pascua
   CS 202
   01/21/21
   Convert Farhenheit to Celsius
*/
#include "hw0.h"

int main(int argc, char** argv)
{
    std::cout << "Temperature Converter" << std::endl;
    std::cout << "Enter the temperature. Then input \"ctof\" to convert from Celsius to Fahrenheit or \"ftoc\" for Fahrenheit to Celsius" << std::endl;
    std::cout << std::endl;

    if (argc > 1) { // Ensure something has been input
        std::string input = argv[2];

        if (input == "ftoc") { // Convert ftoc if user inputs "ftoc"
            cpp_ftoc(argv[1]);
        }

    }
    else 
        std::cout << "Invalid input" << std::endl; // User inputs incorrectly

    

    return 0;
}