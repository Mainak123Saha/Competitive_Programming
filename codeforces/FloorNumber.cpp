#include<bits/stdc++.h>
using namespace std;

void test(){
    int ApartNum, floorsInApart;
    cin >> ApartNum >> floorsInApart;
    if(ApartNum < 3){ // The first floor is always 2
        cout << 1 << '\n';
        return;
    }
    int floorNo = 2;
    int currFloor = 2+floorsInApart;
    while(1){
        if(currFloor >= ApartNum){
            cout<<floorNo<<'\n';
            break;
        }
        currFloor += floorsInApart;
        floorNo++;
    }
}

int main(){
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}