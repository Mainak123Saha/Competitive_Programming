#include<bits/stdc++.h>
using namespace std;

int longestPalindrome(string s) {
    unordered_map<char, int> chars;
    int longestPal = 0;
    for(char c : s){
        chars[c]++;
        if(chars[c]%2 == 0){
            longestPal+=2;
        }
    }
    return (s.size() > longestPal)?longestPal+1:longestPal;
}

int main(){
    
    return 0;
}