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

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }
    for(int i = n-1; i >= 0; i--){
        for(int j = i-1; j >= 0; j--){
            if(nums[i] == nums[j]){
                nums.erase(nums.begin()+j);
                i--;
            }
        }
    }
    cout<<nums.size()<<'\n';
    printVector(nums);
    return 0;
}