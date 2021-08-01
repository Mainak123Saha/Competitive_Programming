#include<bits/stdc++.h>
using namespace std;

void test(){
    long long a, b, t, chance;
    cin>>a>>b;
    if(a>b){
        t = a-b;
    }
    else{
        t = b-a;
    }
    chance = t/10;
    if(t/10.0 > chance){
        cout<<chance+1<<'\n';
    }
    else{
        cout<<chance<<'\n';
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