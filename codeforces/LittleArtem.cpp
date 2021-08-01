#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    int n, m;
    cin >> n >> m;
    bool white = false;
    int wNum = ((n*m)%2==0)?(n*m)/2-1:(n*m)/2;
    for(int i = 0; i < n; i++){
        int toggle = (white)?1:0;
        for(int j = 0; j < m; j++){
            if(toggle and wNum){
                cout << "W";
                toggle = 0;
                wNum--;
            }
            else{
                cout << "B";
                toggle = 1;
            }
        }
        cout << endl;
        if(white){
            white = false;
        }
        else{
            white = true;
        }
    }
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