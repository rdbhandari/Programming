/*
    The same function name may be used in several definitions
    Functions with the same name must have different number of formal parameters and/or different types of formal parameters
    Function selection is based on the number and the types of the actual parameters at the places of invocation
    Function selection (Overload Resolution) is performed by the compiler
    Two functions having the same signature but different return types will result in a compilation error due to attempt to re-declare
    Overloading allows Static Polymorphism
*/

#include <iostream>
using namespace std;
int Area(int a, int b) {return (a * b) ;}
int Area(int c) { return (c * c); }
int main() {
    int x = 10, y = 12,  t;
    t = Area(x, y); // int Area(int, int)
    cout << "Area of Rectangle = " << t << endl;

    int z = 5, u;
    u = Area(z); // int Area(int)
    cout << "Area of Square = " << u << endl;
}