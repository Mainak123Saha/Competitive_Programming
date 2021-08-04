#include<bits/stdc++.h>
using namespace std;

bool solve(string s) {
    unordered_map<char, int> un;
    for(char c : s){
        un[c]++;
        if(un[c] == 2){
            return false;
        }
    }
    return true;
}

int main(){
    
    return 0;
}