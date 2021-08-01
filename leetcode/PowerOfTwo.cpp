#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n == 1){return 1;}
    long long a = 2;
    for(int i = 0; a < n; i++){
        a*=2;
    }
    return n ==a;
}

int main(){
    
    return 0;
}