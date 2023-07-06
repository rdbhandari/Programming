/*
    STATIC : Same varivle/method for every instances of class
*/
/*
    A static data member is associated with class not with object
    is shared by all the objects of a class
    needs to be defined outside the class scope (in addition to the declaration within the
    class scope) to avoid linker error
    must be initialized in a source file
    is constructed before main() starts and destructed after main() ends
    can be private / public
    can be accessed
        with the class-name followed by the scope resolution operator (
        as a member of any object of the class
    virtually eliminates any need for global variables in OOPs environment
*/
/*
    A static member function does not have this pointer — not associated with any object
    cannot access non-static data members
    cannot invoke non-static member functions
    can be accessed
        with the class-name followed by the scope resolution operator (
        as a member of any object of the class
    is needed to read / write static data members
        Again, for encapsulation static data members should be private
        get() - set() idiom is built for access (static member functions in public)
    may initialize static data members even before any object creation
    cannot co-exist with a non-static version of the same function
    cannot be declared as const
*/
#include<iostream>
using namespace std;

class MyClass{ 
    static int x; // static variable
    int y; // non static variable

    public :
    void get(){ x = 15;}
    void print() { x = x + 10;
        cout << "x = " << x << endl;
    }
    static set(int val){
        // y = val; // y can't be accessed as from static member func.
        x = val;
    }
};
int MyClass::x = 0; // Define static data member
int main() {
    
    MyClass obj1, obj2; // Have same x

    obj1.get();  // x = 15
    obj2.get();  // same x again itialized as 15
    obj1.print(); // increamented by 10 x and is printed as 25
    obj2.print(); // same x is printed as 35 which is increamented by previous instances i.e. 25

    obj2.set(12);
    obj2.print();
}

/*
    • x is static data member
    • x is shared by all MyC1ass objects including obj I & obj2
    • static data members must be defined in the global scope
    • static data members are initialized during program start-up
*/


