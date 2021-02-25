/* Jay-Mark Pascua
   CS202
   02/16/2021
   Holds Tokenizer function definitions
*/
#include "Tokenizer.h"

std::vector<std::string> lineToTokens(const std::string& line) {
    std::vector<std::string> s; // Holds tokens
    std::string word = line; // Allows reading into the line
    std::istringstream iss(word);

    while (iss >> word) { // Read to the end of the line, pushing the collected words into string s
        s.push_back(word);
    }
    return s;
}

std::vector<TokenAndPosition> readLines(std::istream& is) {
    std::vector<TokenAndPosition> s; // List tokens, lines, and columns
    TokenAndPosition token; // Holds a token
    std::string line; // Line of words

    while (std::getline(is, line)) { // Reads line by line
        for (auto word : lineToTokens(line)) { // 
            token._token = word;
            token._column = getColumn(line, word);
            s.push_back(token);
        }
        
        token._line++;
    }
    return s;
}

int getColumn(const std::string& line, const std::string& word) {
    int col = line.find(word);
    return col + 1;
}

void printTokens(std::ostream& os, const std::vector<TokenAndPosition>& tokens) {
    for (auto x : tokens) {
        os << "Line " << std::setw(5) << x._line << " ";
        os << "Column " << std::setw(3) << x._column;
        os << " " << "\"" << x._token << "\"" << std::endl;
    }
}