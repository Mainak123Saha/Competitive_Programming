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
    long long n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }
    for(long long i = 0; i < n-1; i++){
        if(a[i] < k){
            k -= a[i];
            a[n-1] += a[i];
            a[i] = 0;
        }
        else{
            a[i] -= k;
            a[n-1] += k;
            break;
        }
    }
    printVector(a);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}