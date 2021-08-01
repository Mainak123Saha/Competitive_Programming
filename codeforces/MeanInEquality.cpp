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

void test(){
    int n;
    cin>>n;
    vector<int> b(n*2);
    for(int i = 0; i < n*2; i++){
        cin>>b[i];
    }
    vector<int> ans;
    sort(b.begin(), b.end());
    for(int i = 0; i < n; i++){
        ans.push_back(b[i]);
        ans.push_back(b[n+i]);
    }
    printVector(ans);
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}