#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    int s;
    cin >> s;
    float ans = 0;
    for(int i = 1; i <= s; i++){
        ans += 1.0/i*1.0;
    }
    cout << fixed;
    cout << setprecision(10);
    cout << ans;
}

int main(){
    ios::sync_with_stdio(false);
    test();
    return 0;
}