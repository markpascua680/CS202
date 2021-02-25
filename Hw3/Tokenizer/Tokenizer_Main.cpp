/* Jay-Mark Pascua
   CS202
   02/16/2021
   Takes either input or a file (specified as a command line argument) and prints the tokens along with the line and column each token occurs at
*/
#include "Tokenizer.h"

int main(int argc, char* argv[]) {
    std::vector<TokenAndPosition> tokens; // List tokens, lines, and columns
    std::ifstream file; // File where tokens are from
    std::string line; // Lines of user input
    std::getline(std::cin, line); 

    file.open(line);

    if (file.is_open()) {
        tokens = readLines(file);
        printTokens(std::cout, tokens);
    }
    else
        std::cout << "File could not be opened" << std::endl;
    
}