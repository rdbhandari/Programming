/*
    Only compare passed to sort. No size is needed
    Only Size is inferred from the type int of data
     compare function is type safe & simple with no cast

*/

#include <iostream> 
#include <algorithm> // sort function
using namespace std;

// compare Function Pointer
bool compare (int i, int j) { // Type safe
    return (i > j); // No Cast needed 
}
int main () { 
    int data[] = {32, 71, 12, 45, 26}; 
    double data2[] = {12.34, 56.78, 91.23, 45.67, 89}; 



    // Start ptr., end ptr. , func. ptr.
    sort (data2, data2+5, compare); // default is ascending order then no need to pass compare function pointer
    
    for(int i=0; i < 5; i++)
        cout << data2[i] << " ";
}