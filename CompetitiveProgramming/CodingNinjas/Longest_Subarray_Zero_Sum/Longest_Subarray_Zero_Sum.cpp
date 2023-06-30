#include <bits/stdc++.h>
using namespace std;

int LongestSubsetWithZeroSum(vector < int > arr) {
    unordered_map <int, int> sMap; // summationMap
    int maxLength = 0;
    int sum = 0;

    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
        if(sum == 0){
            maxLength = i + 1;
        }else{
            if(sMap.find(sum) != sMap.end()){
                maxLength = max(maxLength, (i - sMap[sum]));
            }else{
                sMap[sum] = i;
            }
        }
    }  
  
    return maxLength;
}

int main(){
    vector<int> vector1 = {1, -1, 3, 2,-2, -8, 1, 7, 10, 23};

    cout << LongestSubsetWithZeroSum(vector1);
    return 0;
}

