/*
    An inline function is just a function like any other
    The function prototype is preceded by the keyword inline
    An inline function is expanded (inlined) at the site of its call and the overhead of passing parameters between caller and callee (or called) functions is avoided
*/

#include <iostream>
using namespace std;
inline int SQUARE(int x) {return x * x;}
int main() {
    int a = 3, b;
    b = SQUARE(a);
    cout << "Square = " << b << endl ;
}
/*
    SQUARE (x) is a function with one param
    • inline SQUARE (x) is equally efficient as Macro
    SQUARE(a + 1) works but fails in Macro
    SQUARE(++a) works but fails in Macro
    SQUARE (++a) checks type but does not check in Macro
*/

/*
    Comparison

    MACROS -

        Expanded at the place of calls
        Efficient in execution
        Code bloats
        Has syntactic and semantic pitfalls
        Type checking for parameters is not done
        Helps to write max / swap for all types
        Errors are not checked during compilation
        Not available to debugger

    inline Functions
        Expanded at the place of calls
        Efficient in execution
        Code bloats
        Type checking for parameters is
        Needs template to support all types
        Errors are
        to debugger in DEBUG build
*/

/*
    LIMITATION

    inlineing is a directive — compiler may not inline functions with large body
    inline functions may not be recursive
    Function body is needed for inlineing at the time of function call. Hence, implementation hiding is not possible. Implement inline functions in header files
    inline functions must not have two different definitions
*/