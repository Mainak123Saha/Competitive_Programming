#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    char a[n];
    cin >> a;
    int d = 0, an = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 'D')
            d++;
        else
            an++;
    }
    if(an == d)
        cout << "Friendship" << endl;
    else if(an > d)
        cout << "Anton" << endl;
    else
        cout << "Danik" << endl;
    return 0;
}