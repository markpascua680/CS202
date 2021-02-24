/* Jay-Mark Pascua
   CS202
   02/16/2021
   Holds Tokenizer function definitions
*/
#include "Tokenizer.h"

std::vector<std::string> lineToTokens(const std::string& line) {
    std::vector<std::string> s;
    s.push_back(line);
    return s;
}

std::vector<TokenAndPosition> readLines(std::istream& is) {
    std::vector<TokenAndPosition> s; // List tokens, lines, and columns
    std::string words; // A single token from the line
    int lineCount = 0;
    int columnCount = 0;
     
    while (is >> words) {
        TokenAndPosition token;
        token._token = *lineToTokens(words).begin();
        s.push_back(token);
        
    }
    return s;
}

void printTokens(std::ostream& os, const std::vector<TokenAndPosition>& tokens) {

}