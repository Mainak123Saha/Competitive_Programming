#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    int n, k;
    string S;
    cin >> n >> k >> S;
    if(n == 1 && k){
        cout << 0;
        return 0;
    }
    if(S[0] != '1' && k){
        S[0] = '1';
        k--;
    }
    int i = 1;
    while(k-- && i < n){
        if(S[i] == '0'){
            k++;
            i++;
            continue;
        }
        S[i] = '0';
        i++;
    }
    cout << S << endl;
    return 0;
}