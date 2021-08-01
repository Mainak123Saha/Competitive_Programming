#include<bits/stdc++.h>
using namespace std;

void test(){
    // c1 can take paper waste
    int c1;
    // c2 can take plastic waste
    int c2;
    // c3 can take other waste
    int c3;
    cin >> c1 >> c2 >> c3;
    // Paper Waste
    int a1;
    // plastic waste
    int a2;
    // general waste
    int a3;
    // partially-paper waste
    int a4;
    // partially-plastic waste
    int a5;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    if(a1+a4 <= c1){
        a4 = 0;
    }
    else if(a1 > c1){ cout<<"NO\n"; return; }
    else{
        c1 -= a1;
    }

    if(a2+a5 <= c2){
        a5 = 0;
    }
    else if(a2 > c2){ cout<<"NO\n"; return; }
    else{
        c2 -= a2;
    }

    if(c1 > 0 && a4 > 0){
        a4 = max(a4-c1, 0);
    }
    if(c2 > 0 && a5 > 0){
        a5 = max(a5-c2, 0);
    }

    if(a3+a4+a5 <= c3) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}