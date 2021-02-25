/* Jay-Mark Pascua
   CS202
   02/16/2021
   Takes either input or a file (specified as a command line argument) and prints the tokens along with the line and column each token occurs at
*/
#include "C:\Users\markp\source\repos\CS202\Hw1\Time It I\Time.h"
#include "Tokenizer.h"

int main(int argc, char* argv[]) {
    StopWatch readTime;
    StopWatch printTime;

    std::vector<TokenAndPosition> tokens; // List tokens, lines, and columns
    std::ifstream file; // File where tokens are from
    std::string line; // Lines of user input
    std::getline(std::cin, line); 

    file.open(line);

    if (file.is_open()) {
        readTime.Start();
        tokens = readLines(file);
        readTime.Stop(readTime);

        printTime.Start();
        printTokens(std::cout, tokens);
        printTime.Stop(printTime);

        std::cout << "lineToTokens/readLine time: " << readTime.getSeconds() << " seconds" << std::endl;
        std::cout << "printTokens time: " << printTime.getSeconds() << " seconds" << std::endl;
    }
    else if (line == "--lineonly") {
        readTime.Start();
        tokens = readLines(file);
        readTime.Stop(readTime);
        std::cout << "lineToTokens/readLine time: " << readTime.getSeconds() << " seconds" << std::endl;
    }
    else
        std::cout << "File could not be opened" << std::endl;
    
    
}