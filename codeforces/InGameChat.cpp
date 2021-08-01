#include<bits/stdc++.h>
using namespace std;

void test(){
    int len;
    cin>>len;
    char str[len];
    cin>>str;
    int i = len-1;
    int numOfBr = 0;
    while(str[i] == ')'){
        i--;
        numOfBr++;
    }
    if(numOfBr > len-numOfBr){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}