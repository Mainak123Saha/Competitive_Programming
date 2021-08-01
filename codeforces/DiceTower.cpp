#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    long long n;
    cin >> n;
    long long d = n/14;
    long long x = n%14;
    if(d > 0 and x < 7 && x > 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
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