#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int toMove = 0;
    int brackets = 0;
    for(int i = 0; i < (int) s.size(); i++){
        if(s[i] == '('){
            brackets++;
        }
        else{
            if(!brackets){
                toMove++;
                brackets++;
            }
            brackets--;
        }
        // cout << brackets << "b" << endl;
    }
    cout << toMove << endl;
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
