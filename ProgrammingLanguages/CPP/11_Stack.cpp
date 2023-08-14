/*
Stack is a LIFO (last-ln-First-Out) container that can maintain a collection of arbitrary number of data items all of the same type
To create a stack in C we need to:
    o Decide on the data type of the elements
    o Define a structure (container) (with maximum size) for stack and declare a top variable in the structure
    o Write separate functions for push, pop, top, and isempty using the declared structure
Note:
    o Change of the data type of elements, implies re-implementation for all the stack codes
    o Change in the structure needs changes in all functions
Unlike sin, sqrt etc. function from C standard library, we do not have a ready-made stack that we can use
*/

/*
    C++ standard library provide a ready-made stack for any type of elements
    To create a stack in C++ we need to:
        o Include the stack header
        o Instantiate a stack with proper element type (like char)
        o Use the functions of the stack objects for stack operations
*/

/*
    No codes for creating stack
    No initialization
    Clean interface for stack functions
    Available in library— well-tested
*/

/*
Some common C programs that use stack:
    Reversing a string
    Evaluation of postfix expression
    Identification of palindromes (w/ and W/o center-marker)
        Conversion of an infix expression to postfix
Depth-first Search (DFS)
*/

#include <iostream>
#include <cstring>
#include <stack> // Library codes

using namespace std;

int main() { 
    char strCIOJ= "ABCDE" ; // stack class
    stack<char> s;
    for(int i = 0; i < strlen(str); i++)
        s.push (str ) ;
    
    cout << "Reversed String: " •
    while (!s. empty()) {
        cout << s.top(); s.pop() ;
    }
}