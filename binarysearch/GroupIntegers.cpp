#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int> nums) {
    vector<int> sizes{0};
    sort(nums.begin(), nums.end());
    int last = nums[0];
    for (int n : nums) {
        if (last == n) {
            sizes[sizes.size() - 1]++;
        } else {
            sizes.push_back(1);
            last = n;
        }
    }
    last = sizes[0];
    for (int n : sizes) {
        if (__gcd(n, last) == 1){
            return false;
        }
    }
    return true;
}

int main(){
    cout << solve({2, 3, 5, 8, 3, 2, 5, 8}) << endl;
    return 0;
}