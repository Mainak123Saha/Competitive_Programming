#include<bits/stdc++.h>
using namespace std;

void test(){
    int x, y, k = 0, turns = 0;
    cin >> x >> y;
    if(x == y){ printf("1\n"); return; }
    if(y > x){
        turns++;
        while(1){
            if(k >= y){
                --turns;
                break;
            }
            int power = 1;
            while(1){
                if(pow(10, power)*x+k >= y){
                    k += pow(10, power-1)*x;
                    break;
                }
                power++;
            }
            turns++;
        }
        if(k == y){ printf("%d\n", turns); return; }
    }
    if(k == y){ printf("%d\n", turns); return; }
    while(k <= y){
        k += x;
        turns++;
    }
    k -= x;
    turns--;
    if(k == y){ printf("%d\n", turns-1); return; }
    while(k < y){
        turns++;
        k++;
    }
    cout<<turns<<'\n';
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}