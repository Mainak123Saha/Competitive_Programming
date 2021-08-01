#include<bits/stdc++.h>
using namespace std;

bool solve(int n) {
    set<int> a;
    while(n!=1){
        if(a.count(n))
            return false;
        a.insert(n);
        string s = to_string(n);
        n = 0;
        for(int i = 0; i < s.size(); i++){
            n += pow(s[i]-'0', 2);
        }
    }
    return true;
}

int main(){
    
    return 0;
}