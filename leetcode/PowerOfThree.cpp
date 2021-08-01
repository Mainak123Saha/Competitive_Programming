#include<bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int n) {
    if(n == 1){return true;}
    if(n < 3){return false;}
    long long a = 3;
    for(int i = 0; a < n; i++){
        a*=3;
    }
    return a==n;
}

int main(){
    
    return 0;
}