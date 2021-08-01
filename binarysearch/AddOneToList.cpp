#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& nums) {
    bool isCarry = true;
    for(int i = nums.size()-1; i >= 0; i--){
        if(!isCarry)
            break;
        if(i == 0 && nums[i] == 9){
            nums[i] = 0;
            nums.insert(nums.begin(), 1);
        }
        else if(nums[i] == 9){
            nums[i] = 0;
        }
        else{
            nums[i]++;
            isCarry = false;
        }
    }
    return nums;
}

int main(){
    
    return 0;
}