#include<iostream>
using namespace std;

class MyClass { int data_;
public:
    MyClass(int i): data_(i) { }
    friend void display(const MyClass& a);
};

void display (const MyClass& a) { // global function
    cout << "data = " << a.data_;// Okay
}

void display2 (const MyClass& a) { // global function
    cout << "data = " << a.data_;// Error, as it is not a friend function
}

int main() {
    MyClass obj (10) ;
    display(obj) ;
    // display2(obj) ; 
}
/*
    display() is a non-member function; but friend to class MyClass
    Able to access data_ even thoug it is private in class
*/

/*
    A friend function of a class
        o has access to the private and protected members of the class (breaks the encapsulation) in addition to public members
        o must have its prototype included within the scope of the class prefixed with the keyword friend
        o does not have its name qualified with the class scope
        o is not called with an invoking object of the class
        o can be declared friend in more than one classes
    A friend function can be a
        o global function
        o a member function of a class
        o a function template
*/