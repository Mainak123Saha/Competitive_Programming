#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a+b <= c){
        cout<<c-a-b+1<<'\n';
        return 0;
    }
    else if(b+c <= a){
        cout<<a-b-c+1<<'\n';
        return 0;
    }
    else if(c+a <= b){
        cout<<b-c-a+1<<'\n';
        return 0;
    }
    else{
        cout<<0<<'\n';
        return 0;
    }
}