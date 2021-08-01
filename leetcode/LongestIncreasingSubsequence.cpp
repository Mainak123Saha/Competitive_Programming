#include<bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int> nums) {
    vector<int> dp(nums.size());
    for(int i = 0; i < dp.size(); i++){
        dp[i] = 1;
    }
    for(int i = 1; i < nums.size(); i++){
        for(int j = 0; j < i; j++){
            if(nums[i] > nums[j]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    return *max_element(dp.begin(), dp.end());
}

int main(){
    cout << lengthOfLIS({10,9,2,5,3,7,101,18});
    // 1 1 1 1 1 1 1 1
    // 1 1 1 1 2 1 1 1 -> 5
    // 1 1 1 1 2 2 1 1 -> 3
    // 1 1 1 1 2 2 3 1 -> 7
    // 1 1 1 1 2 2 3 4 -> 11
    // return 4;
    return 0;
}