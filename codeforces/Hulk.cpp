#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s = "";
    for(int i = 0; i < n; i++){
        if(i == n-1){
            if(i%2 == 0) s += "I hate it";
            else s+= "I love it";
        }
        else if(i%2 == 0) s += "I hate that ";
        else s+= "I love that ";
    }
    cout<<s<<'\n';
    return 0;
}