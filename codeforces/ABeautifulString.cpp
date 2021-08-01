#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    string s;
    cin >> s;
    if(s.size() == 1){
        if(s != "?"){
            cout << s << endl;
        }
        else{
            cout << 'a' << endl;
        }
        return;
    }
    if(s[0] == '?'){
        if(s[1] != 'a'){
            s[0] = 'a';
        }
        else {
            s[0] = 'b';
        }
    }
    for(int i = 0; i < (int)s.size()-1; i++){
        if(s[i] == s[i+1] && s[i] != '?'){
            cout << -1 << endl;
            return;
        }
        if(s[i] == '?' && i != 0){
            if((s[i-1] == 'b' || s[i-1] == 'c') && (s[i+1] == '?' || s[i+1] == 'c' || s[i+1] == 'b')){
                s[i] = 'a';
            }
            else if((s[i-1] == 'a' || s[i-1] == 'c') && (s[i+1] == '?' || s[i+1] == 'c' || s[i+1] == 'a')){
                s[i] = 'b';
            }
            else{
                s[i] = 'c';
            }
        }
    }
    if(s[s.size()-1] == '?'){
        if(s[s.size()-1] == '?' && s[s.size()-2] == 'a'){
            s[s.size()-1] = 'b';
        }
        else{
            s[s.size()-1] = 'a';
        }
    }
    cout << s << endl;
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