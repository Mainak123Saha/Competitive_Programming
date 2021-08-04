#include<bits/stdc++.h>
using namespace std;

bool solve(string s) {
    int n = 0;
    for(char c : s){
        if(c == '(')
            n++;
        else{
            if(n)
                n--;
            else
                return false;
        }
    }
    return n==0?true:false;
}

int main(){
    
    return 0;
}