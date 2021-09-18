#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

void test(){
    int n;
    cin >> n;
    string a;
    cin >> a;
    for(int i = 0; i < n; i++){
        if (a[i] == 'U'){
            a[i] = 'D';
        }
        else if(a[i] == 'D'){
            a[i] = 'U';
        }
    }
    cout << a << endl;
}

int main(){
    int T;
    cin >> T;
    while (T--){
        test();
    }
    return 0;
}