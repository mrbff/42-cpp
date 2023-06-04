#include "RPN.hpp"
#include <sstream>
#include <cstdlib>

double rpn(const std::string& expression)
{
    std::istringstream iss(expression);
    std::string token;
    std::stack<double> stack;

    while (iss >> token)
    {
        if (token.length() == 1 && isOperator(token[0]))
        {
            if (stack.size() < 2)
                throw ("Insufficient operands.");

            double operand2 = stack.top();
            stack.pop();
            double operand1 = stack.top();
            stack.pop();
            double result = performOperation(operand1, operand2, token[0]);
            stack.push(result);
        }
        else
        {
            double operand = strtod(token.c_str(), NULL);
            stack.push(operand);
        }
    }

    if (stack.size() != 1)
        throw ("Invalid expression.");

    return stack.top();
}

bool isOperator(char token)
{
    return (token == '+' || token == '-' || token == '*' || token == '/');
}

double performOperation(double operand1, double operand2, char operation)
{
    switch (operation)
    {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            return operand1 / operand2;
        default:
            throw ("Invalid operator.");
    }
}
