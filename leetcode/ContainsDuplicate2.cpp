#include<bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int> nums, int k) {
    unordered_map<int, int> map;
    for (int i=0; i<(int)nums.size(); i++) {
        cout<<i<<" ";
        if (map.count(nums[i]) > 0 && k >= abs(map[nums[i]] - i)){
            cout<<"map[nums[i]]: "<<map[nums[i]]<<" i: "<<i<<" map[nums[i]] - i: "<<map[nums[i]] - i<<'\n';
            return true; //if theres already value in map and k >= abs (i-j), return true
        }
        map[nums[i]] = i; //adds value in map if conditions are not met
        cout<<"nums[i]: "<<nums[i]<<" i: "<<i<<" count: "<<map.count(nums[i])<<'\n';
    }
    return false; //if all conditions are not met then return false
}

int main(){
    cout<<containsNearbyDuplicate(vector<int>{1,2,3,1}, 3)<<'\n';
    cout<<containsNearbyDuplicate(vector<int>{1,0,1,1}, 1)<<'\n';
    cout<<containsNearbyDuplicate(vector<int>{1,2,3,1,2,3}, 2)<<'\n';
    return 0;
}