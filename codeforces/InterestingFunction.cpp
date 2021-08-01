#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    int l, r;
    cin >> l >> r;
    int ans = 0;
    while (l != 0 || r != 0) {
        ans += r - l;
        l /= 10;
        r /= 10;
    }
    cout << ans << '\n';
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