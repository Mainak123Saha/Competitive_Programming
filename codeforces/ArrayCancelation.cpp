#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    int n;
    cin >> n;
    long long curr = 0;
    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        curr = max(0LL, curr+a);
    }
    cout << curr << endl;
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