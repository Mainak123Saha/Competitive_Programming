#include<bits/stdc++.h>
using namespace std;

int findLength(vector<int> nums1, vector<int> nums2) {
    int ans = 0;
    vector<vector<int>> dp(nums1.size()+1, vector<int>(nums2.size()+1));
    for(int i = nums1.size()-1; i >= 0; i--){
        for(int j = nums2.size()-1; j >= 0; j--){
            if(nums1[i] == nums2[j]){
                dp[i][j] = dp[i+1][j+1]+1;
                ans = max(ans, dp[i][j]);
            }
        }
    }
    return ans;
}

int main(){
    cout << findLength({3,2,1,4,7}, {1,2,3,2,1}) << endl;
    return 0;
}