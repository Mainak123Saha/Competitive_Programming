#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool isSquare(int x){
    int n = sqrt(x);
    return n*n == x;
}

void test(){
    int n;
    cin >> n;
    if(n%2 == 0 && isSquare(n/2)) cout << "YES\n";
    else if(n%4 == 0 && isSquare(n/4)) cout << "YES\n";
    else cout << "NO" << endl;
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