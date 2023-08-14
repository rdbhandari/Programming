/*
    A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it
    It is used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries
    namespace provides a class-like modularization without class-like semantics
    Obliviates the use of File Level Scoping of C (file) static
*/

#include <iostream>
using namespace std;
int data = 0;
namespace name1 {       // Global name .
    int data = 1;       // In namespace namel
    namespace name2 {
        int data = 2;   // In nested namespace namel: : name2
    }
}
namespace name3{
    int data = 3;
}

namespace open{ // first defination
    int x = 45;
}
namespace open{ // Additions to the last defination
    int y = 56;
}
int main() {
    cout << data << endl;
    cout << name1::data << endl;
    cout << name1::name2 ::data << endl;

    using name3::data;
    cout << data << endl; // name3 ::data Hides global data

    cout << name3::data << endl;
    cout << ::data << endl; // ::data - accessing global data

    using namespace open; // Both x and y would be available
    cout << x << " " << y << endl;
    x = y = 20;
    cout << x << " " << y;


    return 0;
}

/*
    • By the statement using namespace std; std namespace is brought into the current namespace, which gives us direct access to the names of the functions and classes defined within the library without having to qualify each one with std::
    • When several libraries are to be used it is a convenient method
*/
/*
    namespace vs class

    Every namespace is not a class
    A namespace can be reopened and more declaration added to it
    No instance of a namespace can be created
    using-declarations can be used to shortcut namespace qualification
    A namespace may be unnamed

    Every class defines a namespace
    A class cannot be reopened
    A class has multiple instances
    No using-like declaration for a class
    An unnamed class is not allowed
*/
/*
    LEXICAL SCOPE

    The scope of a name binding an association of a name to an entity, such as a variable is the part of a computer program where the binding is valid: where the name can be used to refer to the entity
    
    C++ supports a variety of scopes:

        Expression Scope — restricted to one expression, mostly used by compiler
        Block Scope — create local context
        Function Scope — create local context associated with a function
        Class Scope — context for data members and member functions
        Namespace Scope — grouping of symbols for code organization
        File Scope — limit symbols to a single file
        Global Scope — outer-most, singleton scope containing the whole program

Scopes may be named or Unnamed
    Named Scope — Option to refer to the scope from outside
        Class Scope — class name
        Namespace Scope — namespace name or unnamed
        Global Scope — "::"
    Unnamed Scope
        Expression Scope
        Block Scope
        Function Scope
        File Scope
    Scopes may or may not be nested
        Scopes that may be nested
            Block Scope
            Class Scope
            Namespace Scope
        Scopes that cannot be nested
            Expression Scope
            Function Scope — may contain Class Scopes
            File Scope — will contain several other scopes
            Global Scope — will contain several other scopes
*/