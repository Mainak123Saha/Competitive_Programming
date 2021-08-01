#include<bits/stdc++.h>
using namespace std;

char nextChar(char c){
    if(c == 'a')
        return 'b';
    else if(c == 'b')
        return 'c';
    else
        return 'a';
}

void test(){
    int n, k;
    cin >> n >> k;
    char toPrint = 'a';
    for(int i = 1; i <= n; i++){
        cout<<(char)toPrint;
        if(i%k == 0){
            toPrint = nextChar(toPrint);
        }
    }
    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}