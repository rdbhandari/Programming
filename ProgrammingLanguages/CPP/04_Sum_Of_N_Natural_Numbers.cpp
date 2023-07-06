#include <iostream>
using namespace std;

int main(){
    int N, Sum;

    cout << "Enter a Range: ";
    cin >> N;

    Sum = 0;
    for (int i=1; i <= N ; i++){   // i declared locally in for loop. Allowed from C99 too
        Sum = Sum + i;
    }

    cout << "Sum of N Natural Number: " << Sum;

    return 0;
}