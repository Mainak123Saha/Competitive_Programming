#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    int n;
    cin >> n;
    cout << 2 << endl;
    int a = n;
    for(int i = n; i >= 2; i--, a--){
        cout << a << ' ' << i-1 << endl;
        if(i == n) a++;
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