#include<bits/stdc++.h>
using namespace std;

void removeNoise(string &s){
    for(int i = 0; i < s.length(); i++){
        if(!isalpha(s[i]) && !isdigit(s[i])){
            s.erase(s.begin()+i);
            i--;
        }
        else{
            s[i] = tolower(s[i]);
        }
    }
}

bool isPalindrome(string &s) {
    removeNoise(s);
    bool isPal = true;
    for(int i = 0; i < s.length()/2; i++){
        if(s[i] != s[s.length()-i-1]){
            return false;
        }
        else{
            cout<<s[i]<<"\n";
        }
    }
    return isPal;
}


int main(){
    string test1 = "A man, a plan, a canal: Panama";
    cout<<isPalindrome(test1);
    return 0;
}