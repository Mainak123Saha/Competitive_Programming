#include<bits/stdc++.h>
using namespace std;

int findComplement(int num) {
    long long ans = (num%2)?0:1, add = 2;
    num /= 2;
    while(num){
        if(!(num&1)){
            ans += add;
        }
        add *= 2;
        num /= 2;
    }
    return ans;
}

int main(){
    
    return 0;
}