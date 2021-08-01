#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    long long a, b;
    cin >> a >> b;
    if(a == b){
        cout << 0 << endl;
        return;
    }
    long long sm = min(a, b), bi = max(a, b);
    int numberOfTimes = 0;
    if(bi&1){
        cout << -1 << endl;
        return;
    }
    while(bi > sm){
        if(bi%8 == 0 && bi/8 >= sm){
            bi /= 8;
            numberOfTimes++;
            continue;
        }
        else if(bi%4 == 0 && bi/4 >= sm){
            bi /= 4;
            numberOfTimes++;
            continue;
        }
        else if(bi%2 == 0 && bi/2 >= sm){
            bi /= 2;
            numberOfTimes++;
            continue;
        }
        else{
            cout << -1 << endl;
            return;
        }
    }
    cout << numberOfTimes << endl;
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