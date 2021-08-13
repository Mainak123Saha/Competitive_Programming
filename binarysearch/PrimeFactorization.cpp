#include<bits/stdc++.h>
using namespace std;

vector<int> solve(int n) {
    vector<int> ans;
    while(n%2 == 0){
        n /= 2;
        ans.push_back(2);
    }
    for(int i = 3; i*i <= n && n != 1; i+=2){
        while(n != 1 && n%i == 0){
            n /= i;
            ans.push_back(i);
        }
    }
    if(n != 1){
        ans.push_back(n);
    }
    return ans;
}

int main(){
    printVector(solve(12));
    return 0;
}