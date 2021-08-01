#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i = 1; i < (int)nums.size(); i++){
        if(nums[i] == nums[i - 1]) return 1;
    }
    return 0;
}

int main(){
    
    return 0;
}