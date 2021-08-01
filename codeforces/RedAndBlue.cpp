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
    int n, m;
    cin >> n;
    vector<int> red(n);
    for(int i = 0; i < n; i++){
        cin >> red[i];
    }
    cin >> m;
    vector<int> blue(m);
    for(int i = 0; i < m; i++){
        cin >> blue[i];
    }
    partial_sum(red.begin(), red.end(), red.begin());
    partial_sum(blue.begin(), blue.end(), blue.begin());
    cout << max(0, *max_element(red.begin(), red.end())) + max(0, *max_element(blue.begin(), blue.end())) << endl;
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