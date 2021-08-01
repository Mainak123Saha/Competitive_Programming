#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums) {
    int ans = -1;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size()-1; i++){
        if(nums[i] == nums[i+1]){
            return nums[i];
        }
    }
    return -1;
}

int main(){
    
    return 0;
}