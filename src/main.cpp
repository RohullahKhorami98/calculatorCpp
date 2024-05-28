#include <iostream>
#include "simple.h"
#include "stack.h"
#include <cstdlib>
#include <cstring>

using namespace std;
int main(int argc, char* argv[]){

    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << "\n";
        std::cerr << "Flags:\n";
        std::cerr << "  -d  Division\n";
        std::cerr << "  -m  Multiplication\n";
        std::cerr << "  -a  Addition\n";
        std::cerr << "  -s  Subtraction\n";
    }

    char* flag = argv[1];
    char operation;
    
    if (strcmp(flag, "-a") == 0) {
        operation = '+';
    } else if (strcmp(flag, "-s") == 0) {
        operation = '-';
    } else if (strcmp(flag, "-m") == 0) {
        operation = '*';
    } else if (strcmp(flag, "-d") == 0) {
        operation = '/';
    }
    std::cout<<"Enter numbers"<<endl;
    std::string numberToCalculate;
    std::getline(std::cin, numberToCalculate);
    double result = allInOne(numberToCalculate, operation);
    std::cout<<"The result is: "<<result<<std::endl;

    return 0;
}

