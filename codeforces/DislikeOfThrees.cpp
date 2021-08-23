#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    int k, n = 0;
    cin >> k;
    for(int i = 0; i < k; i++){
        n++;
        while(n%3 == 0 || n-(n/10*10) == 3){
            n++;
        }
    }
    cout << n << endl;
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