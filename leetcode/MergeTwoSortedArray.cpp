#include<bits/stdc++.h>
using namespace std;

template<typename t>
void printVector(vector<t> n);

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    nums1.resize(m);
    vector<int> sortednum;
    for(int i = 0; i < n; i++){
        nums1.push_back(nums2[i]);
    }
    sort(nums1.begin(), nums1.end());
}

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
    cout<<endl;
}

int main(){
    vector<int> a{1,2,3,0,0,0};
    vector<int> b{2,5,6};
    merge(a, 3, b, 3);
    printVector(a);
    return 0;
}