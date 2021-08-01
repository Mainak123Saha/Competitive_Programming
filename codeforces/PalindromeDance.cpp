#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios::sync_with_stdio(false);
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> dresses(n);
    for(int i = 0; i < n; i++){
        cin >> dresses[i];
    }
    long long rate = 0;
    for(int i = 0; i < n/2; i++){
        if(dresses[i] == dresses[n-i-1]){
            if(dresses[i] == 2)
                rate += min(a, b)*2;
        }
        else{
            if(dresses[i] == 0){
                if(dresses[n-i-1] == 2){
                    rate += a;
                }
                else{
                    cout << -1 << endl;
                    return 0;
                }
            }
            else if(dresses[i] == 1){
                if(dresses[n-i-1] == 2){
                    rate += b;
                }
                else{
                    cout << -1 << endl;
                    return 0;
                }
            }
            else if(dresses[i] == 2){
                if(dresses[n-i-1] == 0){
                    rate += a;
                }
                if(dresses[n-i-1] == 1){
                    rate += b;
                }
            }
        }
    }
    if(n&1){
        if(dresses[n/2] == 2){
            rate += min(a, b);
        }
    }
    cout << rate;
    return 0;
}