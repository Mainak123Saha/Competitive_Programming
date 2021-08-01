#include<bits/stdc++.h>
using namespace std;

int rob(vector<int> nums) {
    if(nums.size() == 0)
        return nums.size();
    vector<int> dp(nums.size()+1);
    dp[1] = nums[0];
    for(int i = 1; i < (int)nums.size(); i++){
        dp[i+1] = *max_element(dp.begin(), dp.begin()+i)+nums[i];
    }
    return *max_element(dp.begin(), dp.end());
}

int main(){
    cout << rob({1,2,3,1}) << endl;
    cout << rob({2,1,1,2}) << endl;
    return 0;
}