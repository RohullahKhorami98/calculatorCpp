#include <iostream>
#include <vector>


/**
 * This Class is about implementing a stack using vector to add characters
 * i Use scope resolution:: operator  to implement function for better practice
*/
class Stack{
public:
    std::vector<char>charStack;
    void push(char c);
    void pop();
    char top();
    bool isEmpty();
    std::size_t size();
    void printStack();
};

void Stack::push(char c){
    charStack.push_back(c);
}
void Stack::pop(){
    charStack.pop_back();
}
char Stack::top() {
    return !charStack.empty() ? charStack.back() : '\0';
}
bool Stack::isEmpty() {
    return charStack.empty();
}
std::size_t Stack::size(){
    return charStack.size();
}
void Stack::printStack() {
    for (char c : charStack) {
        std::cout << c <<std::endl;
    }
}