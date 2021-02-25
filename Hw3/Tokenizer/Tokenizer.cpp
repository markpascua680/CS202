/* Jay-Mark Pascua
   CS202
   02/16/2021
   Holds Tokenizer function definitions
*/
#include "Tokenizer.h"

std::vector<std::string> lineToTokens(const std::string& line) {
    std::vector<std::string> s; // Holds tokens
    std::string temp = line; // Allows reading into the line
    std::stringstream words(temp);

    while (words >> temp) { // Read to the end of the line, pushing the collected words into string s
        s.push_back(temp);
    }
    return s;
}

std::vector<TokenAndPosition> readLines(std::istream& is) {
    std::vector<TokenAndPosition> s; // List tokens, lines, and columns
    TokenAndPosition token; // Holds a token
    std::string line; // Line of words

    while (std::getline(is, line)) { // Reads line by line
        for (auto x : lineToTokens(line)) { // 
            token._token = x;
            s.push_back(token);
        }
        
        token._line++;
    }
    return s;
}

void printTokens(std::ostream& os, const std::vector<TokenAndPosition>& tokens) {

}