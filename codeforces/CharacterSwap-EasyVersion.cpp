#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    vector<char> s_, t_;
    for(int i = 0; i < n; i++){
        if(s[i] != t[i]){
            s_.push_back(s[i]);
            t_.push_back(t[i]);
        }
    }
    if(s_.size() == 2 && t_.size() == 2){
        if(s_[0] == s_[1] && t_[0] == t_[1])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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