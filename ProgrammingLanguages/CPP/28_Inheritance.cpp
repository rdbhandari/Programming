/*
    IS A (is a) RELATION SHIP
    
    We often find one object is a specialization / generalization of another
    OOAD models this using ISA relationship
    C++ models ISA relationship by Inheritance of classes   
*/
/*
    SEMANTICS

    Derived <- Base
    Derive ISA Base

    class Base; // Base Class =
    class Derived: public Base; // Derived Class = Derived

    Use keyword public after class name to denote inheritance
    Name of the Base class follow the keyword

    Public inheritance means " is-a." Everything that applies to base classes must also apply to derived classes, because every derived class object is a base class
object -- Scott Meyers in Item 32, Effective C++ (3rd. Edition)
*/
/*
    Derived ISA Base
    Data Members
        o Derived class inherits all data members of Base class
        o Derived class may add data members of its own
    Member Functions
        o Derived class inherits all member functions of Base class
        o Derived class may override a member function of Base class by redefining it with the same signature
        o Derived class may overload a member function of Base class by redefining it with the same name;
    but different signature
    Access Specification
        o Derived class cannot access private members of Base class
        o Derived class can access protected members of Base class
    Construction- Destruction
        o A constructor of the Derived class must first call a constructor of the Base class to construct the
    Base class instance of the Derived class
        o The destructor of the Derived class must call the destructor of the Base class to destruct the Base
    class instance of the Derived class
*/

/*
  DATA MEMBERS

    Derived ISA Base
    Data Members
        o Derived class inherits all data members of Base class
        o Derived class may add data members of its own
    Object Layout
        o Derived class layout contains an instance of the Base class
        o Further, Derived class layout will have data members of its own
        o C++ does not guarantee the relative position of the Base class instance and Derived class members  
*/

/*
    Derived ISA Base
    Access Specification
        o Derived class cannot access private members of Base class
        o Derived class can access public members of Base class

    protected Access Specification
        o A new protected access specification is introduced for Base class
        o Derived class can access protected members of Base class
        o No other class or global function can access protected members of Base class
        o A protected member in Base class is like public in Derived class
        o A protected member in Base class is like private in other classes or global functions
*/

/*
  Derived ISA Base
    Constructor-Destructor
        o Derived class does not inherit the Constructors and Destructor of Base class but must have access to them
        o Derived class must provide its own Constructors and Destructor
        o Derived class cannot override or overload a Constructor or the Destructor of Base class
    Construction-Destruction
        o A constructor of the Derived class must first call a constructor of the Base class to
        construct the Base class instance of the Derived class
        o The destructor of the Derived class must call the destructor of the Base class to destruct the Base class instance of the Derived class  
*/

#include <iostream>
using namespace std;

// Base Class
class BaseClass{
    public:
    void f1(){
        cout << "This Is The Function Of f1() Base Class" << endl;
    }
    void f2(){
        cout << "This Is The Function f2() Of Base Class" << endl;
    }
    void f3(){
        cout << "This Is The Function f3() Of Base Class" << endl;
    }
    protected:
    void f4(){
        cout << "This Is The Function f4() Of Base Class" << endl;

    }
};

// Derived Class
class DerivedClass: public BaseClass{
    public:
    // Inherits BaseClass::f1()

    // Overloads BaseClass::f2() 
    void f2(){ 
        cout << "This Is The Function f2() Of Derived Class" << endl;
    }
    void f3(){ 
        cout << "This Is The Function f3() Of Derived Class" << endl;
    }
    // Inherits B::f3() and overrides BaseClass::f3()
    void f3(int){
        cout << "This Is The Function f3(int) Of Derived Class" << endl;
        f4();
    }    
};

int main (void){
    DerivedClass derived;
    BaseClass base;

    base.f1(); // Calls BaseClass:f1()
    base.f2(); // Calls BaseClass:f2()
    base.f3(); // Calls BaseClass:f3()
    // base.f4(); // Unable To Call BaseClass:f4() as Protected

    cout << endl;

    derived.f1(); // Calls BaseClass:f1()
    derived.f2(); // Calls DerivedClass:f2()
    derived.f3(); // Calls BaseClass:f3()
    derived.f3(2); // Calls DerivedClass:f3()
    // derived.f4(); // Unable To Call BaseClass:f4() as Protected
}