#include<bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n) {
    int c=0;
    while(n){
        if(n&1==1)
            c++;
        n=n>>1;
    }
    return c;
}

int main(){
    uint32_t a = 00000000000000000000000000001011;
    cout<<hammingWeight(a)<<'\n';
    return 0;
}