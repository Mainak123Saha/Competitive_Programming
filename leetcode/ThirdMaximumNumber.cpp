#include<bits/stdc++.h>
using namespace std;

int thirdMax(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    long long gotTill = 0;
    for(long long i = (int)nums.size()-1; i >= 0; i--){
        if(i == (int)nums.size()-1){
            gotTill++;
            continue;
        }
        else if(nums[i+1] != nums[i]){
            gotTill++;
        }
        if(gotTill == 3){
            return nums[i];
        }
    }
    return nums[nums.size()-1];
}
int main(){
    
    return 0;
}