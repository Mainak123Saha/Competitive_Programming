#include<bits/stdc++.h>
using namespace std;

int solve(int n) {
    int ans = 0;
    for(int i = 1, j = 0; j < n; i+=2, j++){
        ans += i;
    }
    return ans;
}

int main(){
    
    return 0;
}