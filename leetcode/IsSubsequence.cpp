#include<bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
    int till = 0;
    for(char c : s){
        bool got = false;
        for(int i = till; i < t.size(); i++){
            if(c == t[i]){
                got = true;
                till = i+1;
                break;
            }
        }
        if(!got){
            return false;
        }
    }
    return true;
}

int main(){
    
    return 0;
}