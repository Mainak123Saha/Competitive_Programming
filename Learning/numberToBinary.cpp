#include<bits/stdc++.h>
using namespace std;


void bin(unsigned n){
    if (n > 1)
        bin(n >> 1);
    printf("%d", n & 1);
}
string bin2(int n){
    string binary = "";
    for(int i = 0; n != 0; i++){
        if(n%2 == 1){
            binary.push_back('1');
        }
        else{
            binary.push_back('0');
        }
    }
    printf("%d", n & 1);
}

int main(){
    bin(452);
    return 0;
}