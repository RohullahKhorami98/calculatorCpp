#ifndef STACK_H
#define STACK_H
#include <vector>
class Stack{
private:
    std::vector<char>charStack;
public:
    void push(char c);
    void pop();
    char top();
    bool isEmpty();
    std::size_t size();
    void printStack();
};
#endif //STACK_H