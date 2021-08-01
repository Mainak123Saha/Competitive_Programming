#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int closest = INT_MAX;
    for(int i = 0; i < n; i++){
        int temperature;
        cin >> temperature;
        if(abs(temperature) < abs(closest)){
            closest = temperature;
        }
        else if(abs(temperature) == closest){
            closest = (temperature > closest)?temperature:closest;
        }
    }
    cout << closest << endl;
    return 0;
}