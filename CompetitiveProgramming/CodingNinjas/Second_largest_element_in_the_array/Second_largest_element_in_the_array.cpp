#include <bits/stdc++.h> 
using namespace std;

int findSecondLargest(int n, vector<int> &arr){
    int m1, m2, i;
    
    // getting two unique number 
    i = 1;
    while (i < n && arr[0] == arr[i]){
        i += 1;
    }


    if(i == n){
        return (-1); // no unique value is found : all values are same in the array
    }else{
        if(arr[0] > arr[i]){
            m1 = 0; m2 = i;
        }else{
            m1 = i; m2 = 0;
        }
    }
    

    for(int i = 2; i < n; i++){
        if(arr[i] > arr[m1]){
            m2 = m1; // new max value is updated 
            m1 = i; // and max2 is updated by old max1 
            // cout << "m1 :" << arr[m1] << endl;
        }else if(arr[i] > arr[m2] && arr[i] < arr[m1]){
            m2 = i;
            // cout << "m2 :" << arr[m2] << endl;
        }
    }
    return arr[m2];
}

int main(){
    // vector<int> vector1 = {12,1,35,10,34,1};
    vector<int> vector1 = {-10,-40,-25,-12,-25,-10}; 
    // vector<int> vector1 = {9,9,9,9};    



    cout << findSecondLargest(vector1.size(), vector1) << endl;
    
    return 0;
}

