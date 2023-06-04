#pragma once

#include <string>
#include <stack>

double rpn(const std::string& expression);
bool isOperator(char token);
double performOperation(double operand1, double operand2, char operation);