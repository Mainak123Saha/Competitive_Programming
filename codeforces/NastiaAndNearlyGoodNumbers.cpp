#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool isTenTable(int b){
    while(b%10 == 0){
        b /= 10;
    }
    return (b == 1);
}

void test(){
    int a, b; cin >> a >> b;
    if (b == 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << a << ' ' << a * (long long)b << ' ' << a * (long long)(b + 1) << endl;
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