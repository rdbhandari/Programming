#include <iostream>
using namespace std;
#define MAX 10
int main(){

    // Fixed Size Array
    // No difference between arrays in C and C++
    short age[MAX];
    age[0] = 23;
    age[1] = 34;
    age[2] = 45;
    age[3] = 67;

    cout << age[0] << " " << age[8] ;

    /*
        Dynamic Array
    This can be implemented in C (C++) in the following ways:
    Case 1: Declaring a large array with size greater than the size given by users in all (most) of the cases
        o Hard-code the maximum size in code
        o Declare a manifest constant for the maximum size

    Case 2: Using malloc (new []] ) to dynamically allocate space at run-time for the array
    */

}