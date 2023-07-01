#include<iostream>
using namespace std;

int linearSearch(int *arr, int n, int x){
    for(int i = 0; i < n; i++){
        if(arr[i] == x){return i;}
    }
    return (-1);
}

int main(){
    int t, n, x, *arr;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;
        arr = (int*) malloc (sizeof(int) * n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
    }
    cin >> x;
    

    cout << linearSearch(arr, n, x);
}


