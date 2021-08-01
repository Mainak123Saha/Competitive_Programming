#include<bits/stdc++.h>
using namespace std;

bool isHappy(int n) {
    string a = to_string(n);
    unordered_map<string, int> numOnce;
    while(stoi(a) > 1){
        if(numOnce.count(a) == 1){
            return false;
        }
        numOnce[a] = 1;
        long long b = 0;
        for(int i = 0; i < (int)a.size(); i++){
            b += pow((int)a[i]-48, 2);
        }
        a = to_string(b);
    }
    return true;
}

int main(){
    cout << isHappy(2) << endl;
    cout << isHappy(91) << endl;
    return 0;
}