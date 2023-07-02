#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int n, lb, ub, m;
    n = nums.size();

    lb = 0;
    ub = (n-1);
    while(lb <= ub){
        m = (ub + lb)/2;
        if(nums[m] == target){
            return m;
        }else if(nums[m] < target){
            lb = (m+1);
        }else{
            ub = (m-1);
        }
    }
    return -1;

}

int main(){
    int t, n, x;
    cin >> t;
    vector<int> nums;

    for(int i = 0; i < t; i++){
        cin >> n;
        for(int i = 0; i < n; i++){
            int t1;
            cin >> t1;
            nums.push_back(t1);
        }
    }
    cin >> x;
    

    cout << search(nums, x);
}