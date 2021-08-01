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
    vector<int> stu(n*2);
    for(int i = 0; i < n*2; i++){
        cin >> stu[i];
    }
    sort(stu.begin(), stu.end());
    cout << abs(stu[n-1]-stu[n]) << endl;
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