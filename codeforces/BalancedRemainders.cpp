#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    int n;
    cin >> n;
    int c0 = 0, c1 = 0, c2 = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a%3 == 0) c0++;
        else if(a%3 == 1) c1++;
        else c2++;
    }
    int balanced_num = n/3;
    int changes = 0;
    while(c0 != balanced_num || c1 != balanced_num || c2 != balanced_num){
        if(c0 > balanced_num){
            changes += c0 - balanced_num;
            c1 += c0 - balanced_num;
            c0 = balanced_num;
        }
        if(c1 > balanced_num){
            changes += c1 - balanced_num;
            c2 += c1 - balanced_num;
            c1 = balanced_num;
        }
        if(c2 > balanced_num){
            changes += c2 - balanced_num;
            c0 += c2 - balanced_num;
            c2 = balanced_num;
        }
    }
    cout<< changes << endl;
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