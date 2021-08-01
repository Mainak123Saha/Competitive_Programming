#include<bits/stdc++.h>
using namespace std;

template<typename t>
void printVector(vector<t> n){
    for(size_t i = 0; i < n.size(); i++){
        if(i != n.size()-1){
            cout<<n[i]<<'+';
        }
        else{
            cout<<n[i];
        }
    }
    cout<<'\n';
}

int main(){
    string s;
    cin >> s;
    vector<int> nums;
    for(int i = 0; i < (int)s.size(); i+=2){
        nums.push_back((int)s[i]-48);
    }
    sort(nums.begin(), nums.end());
    printVector(nums);
    return 0;
}