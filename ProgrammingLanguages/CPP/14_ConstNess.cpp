/*
   The value of a const variable cannot be changed after definition
    A variable of any data type can be declared as const 
*/

#include <iostream>
using namespace std;

int main(){
    const int n 10; // n is an int type variable with value 10. n is a constant
    // Naturally, a const variable must be initialized when defined

    n = 5;   // Is a compilation error as n cannot be changed
    
    int m;
    int *p = 0;
    p = &m; // Hold m by pointer p

    *p = 7 // Change m by p; m is now 7
    p = &n; // Is a compilation error as n may be changed by 5;


    return 0;
} 

/*
Comapare #define vs const
Prefer const over #define

Using #define - Manifest Constant
    • Is not type safe
    • Replaced textually by CPP
    • Cannot be watched in debugger
    • Evaluated as many times as replaced

Using const - Constant Variable
    • Has its type
    • Visible to the compiler
    • Can be watched in debugger
    • Evaluated only on initialization
*/

/*
    const-ness can be used with Pointers in one of the two ways:
        o Pointer to Constant data where the pointee (pointed data) cannot be changed
        o Constant Pointer where the pointer (address) cannot be changed
*/