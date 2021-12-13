#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

void test(){
    int n, l, r, k;
    cin >> n >> l >> r >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int i = 0;
    while(i < n && a[i] < l){ 
        // cout << a[i] << ' ' << l << ' ' << (a[i] < l) << endl;
        i++;
    }
    // cout << a[i] << endl;
    int ans = 0;
    for(; i < n && r >= a[i] && k >= a[i]; i++){
        k -= a[i];
        ans++;
        // cout << a[i] << ' ';
    }
    // cout << endl;
    cout << ans << endl;
}

int main(){
    int T;
    cin >> T;
    while (T--){
        test();
    }
    return 0;
}