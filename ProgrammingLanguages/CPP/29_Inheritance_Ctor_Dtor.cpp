#include <iostream>
using namespace std;

// Base Class
class BaseClass{
protected:
    int var_b;

public:
    BaseClass(int x = 0): var_b(x){
        cout << "B::B(int): " << var_b << endl;
    }
    ~BaseClass(){
        cout << "B::~B(): " << var_b << endl;
    }
};

// Derived Class
class DerivedClass: public BaseClass{
    int var_d;

public:
    DerivedClass(int x, int y):BaseClass(x), var_d(y){ //Constructor 1: Explicit construction of Base Class
        cout << "D::D(int, int): " << var_b << " , " << var_d << endl;
    }

    DerivedClass(int x): var_d(x){ //Constructor 2: Default construction of Base Class
        cout << "D::D(int): " << var_b << " , " << var_d << endl;
    }

    ~DerivedClass(){
        cout << "D::~D(): " << var_b << " , " << var_d << endl;
    } 
};

int main (void){
    BaseClass base(10);
    cout << "------------------------------";
    DerivedClass derived(20, 30);
    cout << "------------------------------";
    DerivedClass derived2(40);
}