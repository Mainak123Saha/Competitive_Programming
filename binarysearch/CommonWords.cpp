#include<bits/stdc++.h>
using namespace std;

string charLower(string &s){
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}
int solve(string s0, string s1) {
    unordered_map<string, int> s0m, s1m;
    stringstream ss0(s0);
    string words;
    while(ss0>>words){
        s0m[charLower(words)]++;
    }
    int ans = 0;
    stringstream ss1(s1);
    while(ss1>>words){
        s1m[charLower(words)]++;
        if(s1m[words] == 1 && s0m[words]){
            ans++;
        }
    }
    return ans;
}

int main(){
    
    return 0;
}