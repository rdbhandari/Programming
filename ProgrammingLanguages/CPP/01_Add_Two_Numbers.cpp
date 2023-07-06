/*
    operator>> to stream from console
    Console is std: :cin istream (in std namespace)
    operator>> is a binary operator
    a and b can be directly used in operator>> operator
    sum may be declared when needed. Allowed from C89 too
    Formatting is derived from e int of variables
*/


#include <iostream>
int main(){
    int a , b, sum;

    std::cout << "Enter a Number: "; // operator >> to stream from console
    std::cin >> a >> b;

    sum = a + b;

    std::cout << "Sum of " << a << " and " << b << " : " << sum;
    

    return 0;
}