#include<bits/stdc++.h>
using namespace std;

bool areAll1(int &n, string &s){
    bool isAll1 = true;
    for(int i = 0; i < n; i++){
        if(s[i] == '0') isAll1 = false; 
    }
    return isAll1;
}

bool isPalindrome(string &s){
    string rev = s;
    reverse(rev.begin(), rev.end());
    return (s == rev);
}

void test(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count_0 = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0') count_0++;
    }
    if(count_0 == 1){
        cout<<"BOB\n";
    }
    else if(count_0 % 2 == 1){
        cout<<"ALICE\n";
    }
    else{
        cout<<"BOB\n";
    }
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}