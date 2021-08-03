#include<bits/stdc++.h>
using namespace std;

bool solve(string s, int k) {
    int dist = 0;
    int x = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'x'){
            x++;
            if((k-1)*2 < dist){
                return true;
            }
            else if(x == 1 && k <= dist){
                return true;
            }
            else{
                dist = 0;
            }
        }
        else{
            dist++;
        }
    }
    if(!x || k <= dist){
        return true;
    }
    return false;
}

int main(){
    
    return 0;
}