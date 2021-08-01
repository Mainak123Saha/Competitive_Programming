#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void test(){
    int n;
    scanf("%d", &n);
    vector<int> doors(n);
    for(int i = 0; i < n; i++){
        cin>>doors[i];
    }
    for(int i = 0; i < n; i+=2){
        if(i != n-2) cout<<doors[i+1]*-1<<" "<<doors[i]<<" ";
        else cout<<doors[i+1]*-1<<" "<<doors[i]<<"\n";
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