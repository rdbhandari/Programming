/*
    Math Header is cmath (C Standard Library in C++)
    Formatting is derived from type (double) of variables   
    sqrt function from C Standard Library
    Default precision in rint is 5 different
*/

/*
    All names are within std namespace
    std: : cout, std: :cin
    Use using namespace std;
    
    to get rid of writing std:: for every standard library name
*/

#include <iostream>
#include <cmath>  // cmath is standard library of c (math.h)in c++

using namespace std;

int main(){
    int x;

    cout << "Enter a Number: ";  
    cin >> x;

    double sqrt_x = sqrt(x);  // variable may be declared whenever needed
    
    cout << "Sq. Root of " << x;
    cout << " is : " << sqrt_x << endl;  // Default precision in print is 5 (different)

    return 0;
}