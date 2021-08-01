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
    int n = 3;
    vector<vector<int>> subsets;
    for(int b = 0; b < (1<<n); b++){
        vector<int> subset;
        for(int i = 0; i < n; i++){
            if(b&(1<<i)) subset.push_back(i);
        }
        subsets.push_back(subset);
        printVector(subset);
    }
    return 0;
}