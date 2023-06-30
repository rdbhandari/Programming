#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

void reverse_subarray(vector < int > &arr, int low, int high){
    while(low < high){
        swap(arr[low], arr[high]);
        low += 1;
        high -= 1;
    }
}

void rotate_array_by_k(vector < int > &arr, int n, int k){
    k = (k%n);

    reverse_subarray(arr, 0, (n-1)); // reverse whole array
    reverse_subarray(arr, 0, ((n-k)-1)); // reverse part of the array 
    reverse_subarray(arr, (n-k), (n-1)); // reverse part of the array 
}



int main() {
    int n, k, temp;
    vector <int> arr;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> k;

    rotate_array_by_k(arr, n, k);

    for(int val : arr){
        cout << val << " ";
    }
    return 0;
}


