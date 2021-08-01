#include<bits/stdc++.h>
using namespace std;

void test(){
    long long W, H;
    long long req;
    cin>>W>>H>>req;

    long long couldMade = 1;

    while(W%2 == 0){
        couldMade *= 2;
        W /= 2;
    }
    while(H%2 == 0){
        couldMade *= 2;
        H /= 2;
    }
    if(couldMade >= req) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}
/*
Test Cases
5
2 2 3
3 3 2
5 10 2
11 13 1
1 4 4


Output
YES
NO
YES
YES
YES
*/