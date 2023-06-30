#include <bits/stdc++.h> 
using namespace std;

int findEquilibriumIndex(vector<int> &arr) {
    int total_sum = 0;
    int index = (-1);
    for (int val : arr){total_sum += val;}
    }

     return index;

}

int main(){
    int t, n, k, temp;
    vector <int> arr;

    cin >> t;

    // for each testcase
    for(int i = 0; i < t; i++){
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> temp;
            arr.push_back(temp);
        }
        cout << boolalpha << findEquilibriumIndex(arr) << endl;
    }
}
