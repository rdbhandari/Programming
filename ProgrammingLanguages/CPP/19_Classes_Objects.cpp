/*
    A class is an implementation of a type. It is the only way to implement User-defined Data Type (UDT)
    A class contains data members / attributes
    A class has operations / member functions / methods
    A class defines a namespace
    Thus, classes offer data abstraction / encapsulation of Object Oriented
    Programming
    Classes are similar to structures that aggregate data logically
    A class is defined by class keyword
    Classes provide access specifiers for members to enforce data hiding that separates implementation from interface
        o private — accessible inside the definition of the class
        o public — accessible everywhere
    A class is a blue print for its instances (objects)
*/

/*
    An object of a class is an instance created according to its blue print. Objects can be automatically, statically, or dynamically created
    A object comprises data members that specify its state
    A object supports member functions that specify its behavior 
    Data members of an object can be accessed by "." (dot) operator on the object
    Member functions are invoked by "." (dot) operator on the object
    An implicit this pointer holds the address of an object. This serves the identity of the object in C++
    this pointer is implicitly passed to methods
*/

#include <iostream>
using namespace std;

class Complex { public: // class
    double re, im; // Data members
};

int main() {
    // Object c declared, initialized
    Complex c = { 4.2, 5.3 };
    cout << c.re << " "<< c.im; // Use by dot
}