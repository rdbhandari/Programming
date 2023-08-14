#include <iostream>
#include <exception>
using namespace std;

class MyException: public exception{};
class MyClass { public: ~MyClass(){} };

void h() { MyClass h_a;
    // throw 1;                 // Line 1
    // throw 2.5;               // Line 2
    // throw MyException() ;    // Line 3
    // throw exception() ;      // Line 4
    // throw MyClass() ;        // Line 5
};   // Stack unwind, h_a.~MyClass() called
// Passes on all exceptions
void g() { 
    MyClass g_a;
    try { 
        h();
        // Not executed
        bool okay = true;
    }
    // Catches exception from Line 1
    catch (int) { cout << "int\n"; }

    // Catches exception from Line 2
    catch (double) {cout << "double\n";}

    // Catches exception from Line 3-5 & passes on
    catch (...) { throw; }
};   // Stack unwind, g_a.~MyClass() called

void f (){
    MyClass f_a;
    try { g();
        // Not executed
        bool okay = true;
    }
    // Catches exception from Line 3
    catch (MyException) {cout << "MyException\n";}

    // Catches exception from Line 4
    catch (exception) {cout << "exception\n";}

    // Catches exception from Line 5 & passes on
    catch(...) {throw;}
};  // Stack unwind, f_a.~MyClass() called

int main() {
    try {f () ;
        // Not executed
        bool okay = true;
    }
    // Catches exception from Line 5
    catch(...) {cout << "Unknown\n";}
    cout << "End of main()";
}

/*
    CATCH BLOCK
        Name for the Exception Handler
        Catching an Exception is like invoking a function
        Immediately follows the try block
        Unique Formal Parameter for each Handler
        Can simply be a Type Name to distinguish its andler from others
*/
/*
    Exact Match
        o The catch argument type matches the type of the thrown object
            No implicit conversion is allowed
    Generalization / Specialization
        o The catch argument is a public base class of the thrown class object
    Pointer
        o Pointer types — convertible by standard conversion
*/

/*
    TRY-CATCH EXCEPTION MATHCING

    In the order of appearance with matching
    If Base Class catch block precedes Derived Class catch block
        Compiler issues a warning and continues
        Unreachable code (derived class handler) ignored
    catch(...) block must be the last catch block because it catches all exceptions

    If no matching Handler is found in the current scope, the search continues to find a matching handler in a dynamically surrounding try block
        Stack Unwinds
    If eventually no handler is found, terminate() is called
*/

/*
    
*/