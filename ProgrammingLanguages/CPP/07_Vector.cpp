/*
    Vector are implemented as dynamic arrays with list interface whereas arrays can be implemented as statically or dynamically with primitive data type interface. Size of arrays are fixed whereas the vectors are resizable i.e they can grow and shrink as vectors are allocated on heap memory.
*/

#include <iostream>
#include <vector> // Header vector is included
#define MAX 100
using namespace std;

int main(){
    int count, sum = 0;

    cout << "Enter the  no. Elements: ";
    cin >> count;

    vector<int> arr(MAX); // Fixed Size Array

    cout << "Size of Array : " << arr.size() << endl;

    arr. resize (count) ; // Set size of the array at runtime

    cout << "Size of Array After Resizing: " << arr.size() << endl;


    for (int i = 1; i <= arr.size(); i++) {
        arr [i] =  i;
        sum += arr[i] ;
    }
    cout << "Array Sum: " << sum << endl;

    
    return 0;
}