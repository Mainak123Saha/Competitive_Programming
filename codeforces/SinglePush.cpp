#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

template<typename t>
void printVector(vector<t> n){
    for(size_t i = 0; i < n.size(); i++){
        if(i != n.size()-1){
            cout<<n[i]<<' ';
        }
        else{
            cout<<n[i];
        }
    }
    cout<<'\n';
}

void test(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n*2; i++){
        if(i < n)
            cin >> a[i];
        else
            cin >> b[i-n];
    }
    vector<int> diff_pos;
    int isCondiff = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            if(!isCondiff)
                isCondiff = 1;
            else if(isCondiff == 2){
                cout << "NO" << endl;
                return;
            }
            if(a[i] < b[i]){
                diff_pos.push_back(b[i]-a[i]);
            }
            else{
                cout << "NO" << endl;
                return;
            }
        }
        else if(isCondiff == 1){
            isCondiff++;
        }
    }
    if(diff_pos.size() == 0){
        cout << "YES" << endl;
        return;
    }
    int first = diff_pos[0];
    for(int i = 0; i < (int)diff_pos.size(); i++){
        if(diff_pos[i] != first){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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