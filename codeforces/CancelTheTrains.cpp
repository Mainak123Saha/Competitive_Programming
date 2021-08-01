#include<bits/stdc++.h>
using namespace std;

void test(){
    int n, m;
    scanf("%d%d", &n, &m);
    vector<int> bottomTrains;
    for(int i = 0; i < n; i++){
        int bottomTrainPos;
        cin>>bottomTrainPos;
        bottomTrains.push_back(bottomTrainPos);
    }
    int lastPosOfTrain = 0;
    int trainToStop = 0;
    for(int i = 0; i < m; i++){
        int rightTrain;
        cin>>rightTrain;
        for(int j = lastPosOfTrain; j < n && rightTrain >= bottomTrains[j]; j++){
            if(rightTrain == bottomTrains[j]){ trainToStop++; lastPosOfTrain = j; }
        }
    }
    cout<<trainToStop<<'\n';
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}