#include<bits/stdc++.h>
using namespace std;

int hammingDistance(int x, int y){
    int hamming_dis = 0;
    for(int i = 0; x != 0 && y != 0; i++){
        if(x%2 != y%2){
            hamming_dis++;
        }
        x /= 2;
        y /= 2;
    }
    while(x){
        if(x%2 == 1)
        hamming_dis++;
        x /= 2;
    }
    while(y){
        if(y%2 == 1)
        hamming_dis++;
        y /= 2;
    }
    return hamming_dis;
}

int main(){
    
    return 0;
}