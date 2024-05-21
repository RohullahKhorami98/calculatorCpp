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


double addition(std::string addStr){
    std::string cleanString = removeWhiteSpaces(addStr);
    stringstream plusSeperated(cleanString);
    std::string temp;
    std::vector<double> additionArray;
    while(std::getline(plusSeperated,temp,'+')){
        additionArray.push_back(stod(temp));
    }
    double result;
    for(double t: additionArray){
        result+=t;
    }
    return result;
}
