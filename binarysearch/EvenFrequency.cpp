#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int>& nums) {
    unordered_map<int, int> a;
    int oddNums = 0;
    for(int n : nums){
        a[n]++;
        if(a[n]%2 == 1){
            oddNums++;
        }
        else{
            oddNums--;
        }
    }
    return oddNums == 0;
}

int main(){
    
    return 0;
}