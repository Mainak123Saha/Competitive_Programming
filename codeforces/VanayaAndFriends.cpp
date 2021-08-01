#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios::sync_with_stdio(false);
    int n, h;
    cin >> n >> h;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a <= h){
            ans+=1;
        }
        else{
            ans += ceil(a*1.0/h);
        }
    }
    cout << ans << endl;
    return 0;
}