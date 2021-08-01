#include<bits/stdc++.h>
using namespace std;

bool solve(string s) {
    for(int i = 0, j = s.size()-1; i < s.size() && j >= i; i++, j--){
        while(!(isalpha(s[i]) && islower(s[i])) && j >= i){
            i++;
        }
        while(!(isalpha(s[j]) && islower(s[j])) && j >= i){
            j--;
        }
        if(j < i){
            break;
        }
        if(s[i] != s[j]){
            return false;
        }
    }
    return true;
}

int main(){
    
    return 0;
}