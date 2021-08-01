#include<bits/stdc++.h>
using namespace std;

void printBits(int n){
    while(n){
        cout << (n&1);
        n /= 2;
    }
    cout << '\n';
}

int main(){
    int n = 145;
    printf("bit of %d is : ", n); printBits(n);
    printf("after using >>: "); printBits(n>>4); // take bits from back
    printf("after using <<: "); printBits(n<<1); // take bits from front
    printf("after using & : "); printBits(n&0);
    printf("after usig |  : "); printBits(n|2);
    return 0;
}