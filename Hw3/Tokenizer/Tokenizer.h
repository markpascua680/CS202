/* Jay-Mark Pascua
   CS202
   02/16/2021
   Holds Tokenizer declarations
*/

#ifndef TOKENIZER_H
#define TOKENIZER_H

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <vector>

struct TokenAndPosition {
    std::string _token;
    int _line;
    unsigned int _column;
};

std::vector<std::string> lineToTokens(const std::string& line);

std::vector<TokenAndPosition> readLines(std::istream& is);

void printTokens(std::ostream& os, const std::vector<TokenAndPosition>& tokens);


#endif // !TOKENIZER_H
