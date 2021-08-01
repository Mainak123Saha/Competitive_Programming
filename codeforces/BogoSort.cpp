#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

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
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    printVector(a);
}

int main(){
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}