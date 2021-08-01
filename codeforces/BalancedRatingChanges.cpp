#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int flag = 1;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(!(a&1))
            cout << a/2 << endl;
        else{
            cout << (a+flag)/2 << endl;
            flag *= -1;
        }
    }
    return 0;
}