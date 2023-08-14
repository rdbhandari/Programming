#include <iostream>
using namespace std;
int IdentityFunction(int a = 10) { // Default value for parameter a
return (a) ;
}

int Add(int a = 10, int b = 20) {
return (a + b) ;
}

int main() {
    int x = 5, y, z;
    y = IdentityFunction(x); // Usual function call. Actual parameter taken as x = 5
    cout << "Y= " << y << endl;

    y = IdentityFunction() ;
    cout << "Y = "  << y << endl; // Uses default parameter. Actual parameter taken as 10

    z = Add(x) ; // One parameter defaulted — a = x = 5 & b = 20
    cout << "Sum = " << z << endl;

}
/*
    HIGHLIGHTS-

    C++ allows programmer to assign default values to the function parameters
    Default values are specified while prototyping the function
    Default parameters are required while calling functions with fewer arguments or without any argument
    Better to use default value for less used parameters
    Default arguments may be expressions also

    RESTRICTIONS-

    All parameters to the right of a parameter with default argument must have default arguments 
    Default arguments cannot be re-defined
    All non-defau/ted parameters needed in a call
    Default parameters to be supplied only in a header file and not in the definition of a function
*/