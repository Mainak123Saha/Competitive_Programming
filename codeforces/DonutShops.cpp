#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    long long a, b, c;
    cin >> a >> b >> c;
    // The first shop: each donut costs a.
    // The second shop: box of b donuts costs c
    if(a < c and b != 1){ // if second shop give better price for the same dollars
        cout << 1 << ' ';
    }
    else{
        cout << -1 << ' ';
    }
    if(b*a > c){
        cout << b << endl;
    }
    else{
        cout << -1 << endl;
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