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
    vector<int> a{1, 2, 3};
    do{
        printVector(a);
    } while(next_permutation(a.begin(), a.end()));
    return 0;
}