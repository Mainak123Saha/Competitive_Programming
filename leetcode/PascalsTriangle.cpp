#include<bits/stdc++.h>
using namespace std;

void printVector(vector<vector<int>> n){
    for(size_t i = 0; i < n.size(); i++){
        // cout<<"Came\n";
        for(size_t j = 0; j < n[i].size(); j++){
            if(j != n.size()-1){
                cout<<n[i][j]<<' ';
            }
            else{
                cout<<n[i][j];
            }
        }
        cout<<'\n';
    }
    cout<<'\n';
}

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> n;
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0) n.push_back(vector<int>{1});
            else if(j == i) n[i].push_back(1);
            else{
                n[i].push_back(n[i-1][j-1]+n[i-1][j]);
            }
        }
    }
    return n;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        printVector(generate(n));
    }
    return 0;
}