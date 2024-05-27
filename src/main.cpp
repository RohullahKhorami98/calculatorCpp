#include <iostream>
#include "simple.h"
#include "stack.h"

using namespace std;
int main(){
    std::cout<<"Enter numbers"<<endl;
    std::string addStaff;
    Stack s;
    std::getline(std::cin, addStaff);
    allInOne(addStaff,s);
    s.printStack();
    return 0;
}