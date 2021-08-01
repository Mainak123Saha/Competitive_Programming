#include<bits/stdc++.h>
using namespace std;

void test(){
    vector<int> players(4);
    for(int i = 0; i < 4; i++){
        cin >> players[i];
    }
    vector<int> playersSort = players;
    sort(playersSort.begin(), playersSort.end());
    int player1Pos = -1, player2Pos = -1;
    for(int i = 0; i < 4; i++){
        if(players[i] == playersSort[3]) player1Pos = i;
        if(players[i] == playersSort[2]) player2Pos = i;
    }
    if(((player1Pos == 0 || player1Pos == 1) && (player2Pos == 0 || player2Pos == 1)) || ((player1Pos == 2 || player1Pos == 3) && (player2Pos == 2 || player2Pos == 3))) cout<<"NO\n";
    else cout<<"YES\n";
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}