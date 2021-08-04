#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums) {
    unordered_map<int, int> un;
    int ans = 0;
    for(int n : nums){
        un[n]++;
        ans = max(ans, un[n]);
    }
    return ans;
}

int main(){
    
    return 0;
}