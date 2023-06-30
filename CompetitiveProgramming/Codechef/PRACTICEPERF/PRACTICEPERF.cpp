#include <iostream>
using namespace std;

int main(){
    int count;
    int temp;

    count = 0;
    // first week
    cin >> temp;
    if(temp > 9){count += 1;} 

    // second week
    cin >> temp;
    if(temp > 9){count += 1;} 

    // third week
    cin >> temp;
    if(temp > 9){count += 1;} 

    // fourth week
    cin >> temp;
    if(temp > 9){count += 1;} 


    cout << count;
}