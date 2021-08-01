#include<bits/stdc++.h>
using namespace std;

template<typename t>
void printVector(vector<t> n){
    for(size_t i = 0; i < n.size(); i++){
        if(i != n.size()-1){
            cout<<n[i]<<' ';
        }
        else{
            cout<<n[i];
        }
    }
    cout<<'\n';
}

vector<int> intersection(vector<int> nums1, vector<int> nums2) {
    unordered_set<int> a;
    for(int i = 0; i < (int)nums1.size(); i++){
        a.insert(nums1[i]);
    }
    vector<int> ans;
    sort(nums2.begin(), nums2.end());
    for(int i = 0; i < (int)nums2.size(); i++){
        if(a.count(nums2[i])){
            ans.push_back(nums2[i]);
            a.erase(nums2[i]);
        }
    }
    return ans;
}

int main(){
    printVector(intersection(vector<int>{1, 2, 3}, vector<int>{1, 2, 3, 2, 2}));
    return 0;
}