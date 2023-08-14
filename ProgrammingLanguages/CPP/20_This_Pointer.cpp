/*
    An implicit this pointer holds the address of an object
    this pointer serves as the identity of the object in C++
    Type of this pointer for a class X object: X * const this;
    this pointer is accessible only in member functions
*/

#include <iostream>
using namespace std;

class X { public: 
    int m1, m2;
    void f (int k1, int k2) {       // Sample member function
        m1 = k1;                        // Implicit access without this pointer
        this->m2 = k2;                  // Explicit access with this pointer
        cout << "ld = " << this << endl;   // Identity (address) of the object
    }
};

int main() { 
    X a;
    a.f(2, 3);
    cout << "Addr = " << &a << endl; // Address (identity) of the object
    cout << "a.m1 = " << a.m1 << "a.m2 = " << a.m2 << endl;
    return 0;
}
