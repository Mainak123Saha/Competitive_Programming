#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    int n;
    cin >> n;
    if(n == 1){
        cout << -1 << endl;
        return;
    }
    cout << 2;
    for(int i = 0; i < n-1; i++){
        cout << 3;
    }
    cout << endl;
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