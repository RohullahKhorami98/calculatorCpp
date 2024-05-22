#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;


std::string removeWhiteSpaces(const std::string& text){
    std::string temp;
    for(int i = 0; i<text.size(); i++){
        if(!isspace(text[i])){
            temp+=text[i];
        }
    }
    return temp;
}

vector<char>getOperators(std::string expression){
    vector<char>operators;
    for(char c: expression){
        if(c == '+' || c == '-' || c == '*' || c == '/'){
            operators.push_back(c);
        }
    }
    return operators;
}

double allInOne(std::string addStr){
    std::string cleanString = removeWhiteSpaces(addStr);
    vector<char> optrs = getOperators(cleanString);
    for(char c : optrs){
        std::cout<<c<<endl;
    }
    return 0;
}
