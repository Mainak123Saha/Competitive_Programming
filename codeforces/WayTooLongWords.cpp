#include<bits/stdc++.h>
using namespace std;

void test(){
    string n;
    cin>>n;
    if(n.length()>10){
        cout<<n[0]<<n.length()-2<<n[n.length()-1]<<'\n';
    }
    else{
        cout<<n<<'\n';
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