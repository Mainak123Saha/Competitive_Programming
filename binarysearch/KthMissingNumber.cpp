#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums, int k) {
    int n = nums[0];
    k++;
    for(int i = 0; i < nums.size(); i++, n++){
        if(n != nums[i]){
            k--;
            while(n != nums[i] && k){
                n++;
                k--;
            }
            if(n == nums[i]){
                k++;
            }
            if(!k){
                return n;
            }
        }
    }
    return n+k-1;
}

int main(){
    
    return 0;
}