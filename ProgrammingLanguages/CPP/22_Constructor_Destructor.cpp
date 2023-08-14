#include <iostream>
using namespace std;

class MyClass{
    private: int var1, var2;
    
    public: MyClass(){
        cout << endl<<  "This Is Constructor" << endl;
        cout << "var1: " << var1 << "  var2: " << var2 << endl;
    }

    // overloaded constructor, default parameter: var2
    MyClass(int par1): var1(par1), var2(5){
        cout << endl << "This Is Overloaded Constructor" << endl;
        cout << "var1: " << var1 << "  var2: " << var2 << endl;
    }

    ~MyClass(){
        cout << endl << "This Is Destructor" << endl; 
    }
    void memberfunction(){
        cout << "This Is Member Function" << endl;
    }
};

int main(){

    MyClass m;
    m.memberfunction();

    MyClass m2(23);
    m2.memberfunction(); //Last Construnction First Destruction

    
    return 0;
}

/*
    Constructor vs Destructor

    CONSTRUCTOR
        1) Is a static member function without this pointer but gets the pointer to the memory where the object is constructed
        2) Name is same as the name of the class
            class Stack { public: Stack(); } ;
        3) Has no return type - not even void
            Stack: : Stack(); // Not even void
        4) Does not return anything. Has no return statement
        Stack: :Stack(): top-
            {} // Returns implicitly
        5) Initializer list to initialize the data members
            Stack::Stack(): // Initializer list
            data_(new char [10]), // Init data _
            top_(—1) // Init top _
            {}
    
        6) Implicit call by instantiation / operator new
            Stack s;   // Calls Stack: :Stack()
    
        7) May be public or private
        8) May have any number of parameters
        9) Can be overloaded
    DESTRUCTOR
        1) Has implicit this pointer
        2) Any name different from name of class
            class Stack { public: int empty(); } ;
        3) Must have a return type - may be void
            int Stack: :empty() ;
        4) Must have at least one return statement
            int Stack: : empty() {return (top_ == -1); }
            void pop()
            { --top_• } // Implicit return for void
        5) Not applicable
        6) Explicit call by the object
            s.empty(); // Calls Stack: : empty(&s)
        7) May be public or private
        8) May have any number of parameters
        9_ Can be overloaded
   
*/

/*
    Constructor
        o A constructor with no parameter is called a Default Constructor
        o If no constructor is provided by the user, the compiler supplies a free default constructor
        o Compiler-provided (free default) constructor, understandably, cannot initialize the object to proper values. It has no code in its body
        o Default constructors (free or user-provided) are required to define arrays of objects
    Destructor
        o If no destructor is provided by the user, the compiler supplies a free default destructor
        o Compiler-provided (free default) destructor has no code in its body
        
*/


/*
    OBJECT LIFETIME

    In OOP, the object lifetime (or life cycle) of an object is the time between an object's creation and its destruction
    Rules for object lifetime vary significantly:
        o Between languages
        o in some cases between implementations of a given language, and
        o lifetime of a particular object may vary from one run of the program to another
    Context C++: Object Llifetime coincides with Variable Lifetime (the extent of a variable when in a program's execution the variable has a meaningful value) of a variable with that object as value (both for static variables and automatic variables). However, in general, object lifetime may not be tied to the lifetime of any one variable
    Context Java / Python: In 00 languages that use garbage collection (GC), objects are allocated on the heap
        o object lifetime is not determined by the lifetime of a given variable
        o the value of a variable holding an object actually corresponds to a reference to the object,
        not the object itself, and
        o destruction of the variable just destroys the reference, not the underlying object
*/

/*
    • Execution Stages
        o Memory Allocation and Binding
        o Constructor Call and Execution
        o Object Use
        o Destructor Call and Execution
        o Memory De-Allocation and De-Binding
• Object Lifetime
    o Starts with execution of Constructor Body
        Must follow Memory Allocation
        As soon as Initialization ends and control enters Constructor Body
    o Ends with execution of Destructor Body
        As soon as control leaves Destructor Body
        Must precede Memory De-allocation
    o For Objects of Built-in // Pre-Defined Types
        No Explicit Constructor / Destructor
        Lifetime spans from object definition to end of scope
*/  