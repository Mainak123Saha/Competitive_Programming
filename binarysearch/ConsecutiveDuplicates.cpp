#include<bits/stdc++.h>
using namespace std;

string solve(string s) {
    if(s.size() == 0){
        return s;
    }
    for(int i = 0; i < s.size()-1; i++){
        if(s[i+1] == s[i]){
            s.erase(s.begin()+i);
            i--;
        }
    }
    return s;
}

int main(){
    
    return 0;
}