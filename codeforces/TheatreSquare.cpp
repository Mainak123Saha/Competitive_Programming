#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios::sync_with_stdio(false);
    long double n, m, a;
    cin >> n >> m >> a;
    long long ans = ceil(m/a) * ceil(n/a);
    cout << ans << endl;
    return 0;
}