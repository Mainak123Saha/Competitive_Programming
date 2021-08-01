#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    int a, b, n, S;
    cin >> a >> b >> n >> S;
    if(S/n*1.0 > a){
        S -= n*a;
    }
    else{
        S %= n;
    }
    if(b >= S){
        cout << "YES" << endl;
        return;
    }
    else{
        cout << "NO" << endl;
        return;
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