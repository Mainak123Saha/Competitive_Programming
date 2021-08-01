#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    string a, b;
    cin >> a >> b;
    size_t lcm = (a.size()/__gcd(a.size(), b.size()))*b.size();
    if(a.size() < lcm){
        string la = a;
        for(size_t i = a.size(); i < lcm; i+=a.size()){
            la += a;
        }
        a = la;
    }
    if(b.size() < lcm){
        string lb = b;
        for(size_t i = b.size(); i < lcm; i+=b.size()){
            lb += b;
        }
        b = lb;
    }
    if(a == b){
        cout << a << endl;
    }
    else{
        cout << -1 <<endl;
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