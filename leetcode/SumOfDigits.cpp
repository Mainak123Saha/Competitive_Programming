#include<bits/stdc++.h>
using namespace std;

int addDigits(int num) {
    if (num == 0) return 0;
    if (num % 9 == 0) return 9;
    return num % 9;
}

int main(){
    cout<<addDigits(484541)<<'\n';
    return 0;
}