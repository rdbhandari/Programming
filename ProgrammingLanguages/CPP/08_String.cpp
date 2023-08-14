/*
    String manipulations in C and C++:
    C-String and string. h library
        o C-String is an array of char terminated by NULL
        o C-String is supported by functions in string. h in C standard library
    string type in C++ standard library
        o string is a data type
        o With operators (like + for concatenation) it behaves like a built-in type
        o In addition, for functions from C Standard Library string. h can be used in C++ as cstring in std namespace
*/

/*
    Further,
        operator= can be used on strings in place of strcpy function in C
        operator<=, operator<, operator>=, operator> operators can be used on strings in place of strcmp function in C
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "HELLO ";
    string str2 = "WORLD";

    string str = str1+ str2; // operator + to concatenation

    cout << str;
    
    return 0;
}