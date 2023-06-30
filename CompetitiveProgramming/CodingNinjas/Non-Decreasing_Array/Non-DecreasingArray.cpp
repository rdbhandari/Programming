// https://www.youtube.com/watch?v=iL7oSNc3OXA

#include <bits/stdc++.h> 
using namespace std;

bool isPossible(int *arr, int n){
    bool changed = false;

    int pos = -1;
    for (int i = 0; i < (n-1); i++){
        if(arr[i] > arr[i+1]){
            if(pos != -1){
                return false;
            }
            pos = i;
        }
    }

    return pos == (-1) || pos == 0 || pos == (n-2) || arr[pos -1] <=  arr[pos +1] || arr[pos] <=  arr[pos +2];
}

int main(){
    int t, n, k, temp;

    cin >> t;

    // for each testcase
    for(int i = 0; i < t; i++){
        cin >> n;
        int arr [n];
        for(int j = 0; j < n; j++){
            cin >> arr[j]; 
        }
        cout << boolalpha << isPossible(arr, n) << endl;
    }
}
