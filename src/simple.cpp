#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <regex>
#include "stack.h"
using namespace std;

bool isValidInput(const std::string &input)
{
    std::regex pattern("[0-9,.+\\-*/]+");
    bool valid;
    if (std::regex_match(input, pattern))
    {
        valid = true;
    }
    else
    {
        valid = false;
    }
    return valid;
}

std::string removeWhiteSpaces(const std::string &text)
{
    std::string temp;
    for (int i = 0; i < text.size(); i++)
    {
        if (!isspace(text[i]))
        {
            temp += text[i];
        }
    }
    return temp;
}
double addition(std::string numbers)
{
    stringstream plusSeperated(numbers);
    std::string temp;
    std::vector<double> additionArray;
    while (std::getline(plusSeperated, temp, '+'))
    {
        additionArray.push_back(stod(temp));
    }
    double result = 0.0;
    for (double t : additionArray)
    {
        result += t;
    }
    return result;
}
double subtraction(std::string numbers)
{
    stringstream minusSperated(numbers);
    std::string temp;
    std::vector<double> subArray;
    while (std::getline(minusSperated, temp, '-'))
    {
        subArray.push_back(stod(temp));
    }
    double result = 0.0;
    for (double t : subArray)
    {
        result -= t;
    }
    return result;
}

double multiplication(std::string numbers)
{
    stringstream multiSeperated(numbers);
    std::string temp;
    std::vector<double> multiArray;
    while (std::getline(multiSeperated, temp, '*'))
    {
        multiArray.push_back(stod(temp));
    }
    double result = 1.0;
    for (double t : multiArray)
    {
        result = result * t;
    }
    return result;
}
double division(std::string numbers)
{
    stringstream divideSeperated(numbers);
    std::string temp;
    std::vector<double> divideArray;
    double result = 0.0;
    while (std::getline(divideSeperated, temp, '/'))
    {
        divideArray.push_back(stod(temp));
    }
    try
    {
        if (divideArray.size() > 0)
        {
            result = divideArray[0];
            for (int i = 1; i < divideArray.size(); ++i)
            {
                if (divideArray[i] == 0)
                {
                    throw std::invalid_argument("Division by zero error");
                }
                result /= divideArray[i];
            }
        }
        else
        {
            throw std::invalid_argument("No operands for division");
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return result;
}

double allInOne(std::string numbers, char operation)
{
    std::string cleanString = removeWhiteSpaces(numbers);
    bool validInput = isValidInput(cleanString);
    double result = 0.0;
    if (validInput)
    {
        switch (operation)
        {
        case '+':
            result = addition(numbers);
            break;
        case '-':
            result = subtraction(numbers);
            break;
        case '*':
            result = multiplication(numbers);
            break;
        case '/':
            result = division(numbers);
            break;

        default:
            std::cout << "Invalid Operation" << std::endl;
            break;
        }
    }
    return result;
}
