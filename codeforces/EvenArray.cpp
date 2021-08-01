#include<bits/stdc++.h>
using namespace std;

void test(){
    int n;
    cin>>n;
    int odd = 0;
    int eve = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin>>a;
        if(i%2 != a%2){
            if(a%2 == 0){
                eve++;
            }
            else{
                odd++;
            }
        };
    }
    if(odd == eve) cout<<eve<<'\n';
    else cout<<-1<<'\n';
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}