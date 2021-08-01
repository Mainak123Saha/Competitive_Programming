#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    string s, t;
    cin >> s >> t;
    for(int i = 0; i < (int) s.size(); i++){
        if(s[i] == t[0]){
            int ti = 0;
            int j = i;
            while(j < (int)s.size() && ti < (int)t.size() && s[j] == t[ti]){
                j++;
                ti++;
                if(s[j-2] == t[ti]){
                    int k = j - 2, t2 = ti;
                    while(k >= 0 && ti < (int)t.size() && s[k] == t[t2]){
                        k--;
                        t2++;
                    }
                    if(t2 == (int)t.size()){
                        cout << "YES" << endl;
                        return;
                    }
                }
            }
            j-=2;
            while(j >= 0 && ti < (int)t.size() && s[j] == t[ti]){
                j--;
                ti++;
            }
            if(ti == (int)t.size()){
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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