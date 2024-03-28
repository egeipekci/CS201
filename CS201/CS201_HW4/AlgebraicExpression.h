#include "iostream"
#include "Stack.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdlib>
using namespace std;

int precedence(char c);

// It converts an infix expression exp to its equivalent postfix form .
string infix2postfix ( const string infix );

// It evaluates a postfix expression .
double evaluatePostfix ( const string exp );