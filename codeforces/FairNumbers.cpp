#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool isFair(string s){
    for(int i = 0; i < (int)s.size(); i++){
        int num = s[i]-48;
        if(num == 0 || num == 1){
            continue;
        }
        if(stoll(s)%(s[i]-48) != 0){
            return false;
        }
    }
    return true;
}
unordered_map<long long, long long> wasBefore;
void test(){
    long long n;
    cin >> n;
    if(wasBefore[n]){
        cout << wasBefore[n] << endl;
        return;
    }
    long long num = n;
    while(!isFair(to_string(num))){
        num++;
    }
    wasBefore[n] = num;
    cout << num << endl;
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