#include<bits/stdc++.h>
using namespace std;

void test(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> b = a;
    int diff = 2;
    sort(b.begin(), b.end());
    if(is_sorted(a.begin(), a.end()))
        diff = 0;
    else if(a[0] == 1 || a[n-1] == n){
        diff = 1;
    }
    else  if(a[0] == n && a[n-1] == 1){
        diff = 3;
    }
    cout << diff << '\n';
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