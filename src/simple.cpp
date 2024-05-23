#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <regex>
using namespace std;

bool isValidInput(const std::string& input) {
    std::regex pattern("[0-9,.+-*/]+");
    bool valid;
    if(std::regex_match(input, pattern)){
        valid = true;
    }
    else{
        valid = false;
    }
    return valid;
}

std::string removeWhiteSpaces(const std::string& text){
    std::string temp;
    for(int i = 0; i<text.size(); i++){
        if(!isspace(text[i])){
            temp+=text[i];
        }
    }
    return temp;
}

double allInOne(std::string addStr){
    std::string cleanString = removeWhiteSpaces(addStr);
    bool validInput = isValidInput(cleanString);
    if(validInput){
        return 0;
    }
    else{
        return -1;
    }
}
