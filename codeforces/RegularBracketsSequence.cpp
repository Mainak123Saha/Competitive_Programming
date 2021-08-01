#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    string s;
    cin >> s;
    if(s[0] != ')' && s.size()%2 == 0 && s[s.size()-1] != '('){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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