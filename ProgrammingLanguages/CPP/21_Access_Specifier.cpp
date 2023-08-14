/*
    Classes provide access specifiers for members (data as well as function) to enforce data hiding that separates implementation from interface
    o private — accessible inside the definition of the class
        member functions of the same class
    o public — accessible everywhere
        member functions of the same class
        member function of a different class
        global functions
    The keywords public and private are the Access Specifiers
    Unless specified, the access of the members of a class is considered private
    A class may have multiple access specifier. The effect of one continues till the next is
*/
/*
    The private part of a class (attributes and member functions) forms its implementation because the class alone should be concerned with it and have the right to change it
    
    The public part of a class (attributes and member functions) constitutes its interface which is available to all others for using the class
    
    Customarily, we put all attributes in private part and the member functions in public part. This ensures:
        o The state of an object can be changed only through one of its member functions (with the knowledge of the class)
        o The behavior of an object is accessible to others through the member functions
    This is known as Information Hiding
*/

#include <iostream>
#include <vector>
using namespace std;

class Stack { 
private: vector<char> data_; int top_;
public: // Initialization and De—lnitialization
    Stack(){
        top_ = (-1);
        data_.resize(100);
     } // Constructor

    ~Stack() {} ; // Destructor


    // Stack LIFO Member Functions
    int empty() {return (top_ == -1);}
    void push (char x) {data_ [++top_] = x;}
    void pop() {--top_;}
    char top() { return data_ [top_]; }
};
    int main() {
        Stack s; char str[10] = "ABCDE";
        for (int i=0; i<5; ++i)
            s.push(str[i]);

        while (!s.empty()) {
            cout << s.top(); s.pop();
        }
}