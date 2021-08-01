#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    long long n;
    cin >> n;
    string s;
    cin >> s;
    int max_room = 0;
    if(s[0] == '1' || s[n-1] == '1'){
        cout << n * 2 << endl;
        return;
    }
    for(int i = 1; i < n-1; i++){
        if(s[i] == '1'){
            int can_visit = max(i+1, (int)(n-i));
            max_room = max(max_room, can_visit);
            // cout << max_room << endl;
        }
    }
    if(max_room){
        cout << max_room*2 << endl;
    }
    else {
        cout << n << endl;
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