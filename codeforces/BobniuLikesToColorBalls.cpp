#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool check(int r, int g, int b, int a){
    return (r%2 + g%2 + b%2 + a%2) > 1?false:true;
}

void test(){
    long long r, g, b, a;
    cin >> r >> g >> b >> a;
    if(check(r, g, b, a)){
        cout << "Yes" << endl;
        return;
    }
    if(r!=0 and b!=0 and g!=0 and check(r-1, g-1, b-1, a+1)){
        cout << "Yes" << endl;
        return;
    }
    else{
        cout << "No" << endl;
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