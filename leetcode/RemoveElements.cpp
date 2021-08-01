#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val){
    if(nums.size()>0){
        for(int i = 0; i < nums.size(); i++){
            if(val == nums[i]){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        unordered_set<int> a;
        return nums.size();
    }
    else{
        return 0;
    }
}

int main(){
    
    return 0;
}