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

vector<int> getRow(int rowIndex) {
    if(rowIndex==0) return {1};
    vector<int> res;
    res.push_back(1);
    // It is the pervious element of the pascals triangle
    int prev = 1;
    // While it not reaches the row index
    for(int i=1;i<=rowIndex;i++){
        // in each previous * (rowIndex-i+1)/i
        int curr = (long long int)prev * (rowIndex-i+1)/i;
        res.push_back(curr);
        prev = curr;
    }
    return res;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        printVector(getRow(n));
    }
    return 0;
}