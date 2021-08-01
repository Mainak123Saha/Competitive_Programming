#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    long long n, k;
    cin >> n >> k;
    long long cf = (n + k - 1) / k;
    k *= cf;
    cout << (k + n - 1) / n << endl;
}

int main(){
    ios::sync_with_stdio(false);
    long long T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}