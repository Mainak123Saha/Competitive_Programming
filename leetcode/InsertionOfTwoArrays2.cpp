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

vector<int> intersect(vector<int> nums1, vector<int> nums2) {
    unordered_map<int, int> a;
    for(int n : nums1){
        a[n]++;
    }
    vector<int> ans;
    for(int n : nums2){
        if(a[n]){
            ans.push_back(n);
            a[n]--;
        }
    }
    return ans;
}

int main(){
    printVector(intersect({1, 2, 3, 3}, {1, 2, 3, 3, 4}));
    return 0;
}