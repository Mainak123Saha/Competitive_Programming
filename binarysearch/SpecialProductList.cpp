#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& nums) {
    int product = 1;
    int zeroes = 0;
    for(int n : nums){
        if(n == 0){
            zeroes++;
        }
        else{
            product = product*n;
        }
    }
    if(zeroes > 1){
        return vector<int>(nums.size());
    }
    if(zeroes){
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[i] = 0;
            }
            else{
                nums[i] = product;
            }
        }
    }
    else{
        for(int i = 0; i < nums.size(); i++){
            nums[i] = product/nums[i];
        }
    }
    return nums;
}

int main(){
    
    return 0;
}