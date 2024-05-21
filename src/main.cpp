#include <iostream>
#include "simple.h"

using namespace std;
int main(){
    /**
     * Addition
    */
    std::cout<<"Enter numbers for addition"<<endl;
    std::string addStaff;
    std::getline(std::cin, addStaff);
    double add = addition(addStaff);
    std::cout<<add<<endl;
}