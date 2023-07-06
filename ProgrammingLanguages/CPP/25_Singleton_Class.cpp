/*
Singleton is a creational design pattern
    o ensures that only one object of its kind exists and
    o provides a single point of access to it for any other code

A class is called a Singleton if it satisfies the above conditions
Many classes are singleton:
    o President of India
    o Prime Minister of India
    o Director of IIT Kharagpur
    o CEO of a Company
*/
#include <iostream>
using namespace std;
class Printer { //THIS IS A SINGLETON PRINTER -- ONLY ONE INSTANCE
    private: bool blackAndWhite_, bothSided_;
    Printer(bool bw = false, bool bs = false) : blackAndWhite_ (bw) , bothSided_(bs)
    { 
        cout << "Printer constructed" << endl;
    } // Private —— Printer cannot be constructed!


    static Printer *myPrinter_; // Pointer to the Instance of the Singleton Printer
    public: 
    ~Printer() {cout << "Printer destructed" << endl; }
    static const Printer& printer (bool bw = false, bool bs = false) {// Access the Printer
        if (!myPrinter_) myPrinter_ = new Printer(bw, bs); // Constructed for first call
            return *myPrinter_; // Reused from next time
    }
    void print (int nP) const{cout << "Printing " << nP << " pages" << endl; }
};
Printer *Printer::myPrinter_ = 0;

int main(){
    Printer::printer().print (10); 
    Printer::printer().print (20);
    delete &Printer:: printer();
}
