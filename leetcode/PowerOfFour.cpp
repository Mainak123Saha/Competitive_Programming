#include<bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n) {
    if(n == 1){return true;}
    if(n < 4){return false;}
    long long a = 4;
    for(int i = 0; a < n; i++){
        a*=4;
    }
    return a==n;
}

int main(){
    
    return 0;
}