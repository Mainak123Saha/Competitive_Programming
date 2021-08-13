#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums) {
    unordered_map<int, bool> a;
    int maximum = -1;
    for(int n : nums){
        if(a[n*-1]){
            maximum = max(maximum, abs(n));
        }
        else if(n == 0){
            maximum = max(maximum, 0);
        }
        else{
            a[n] = true;
        }
    }
    return maximum;
}

int main(){
    
    return 0;
}