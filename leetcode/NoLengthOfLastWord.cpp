#include<bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
    // if(s[s.length()-1] == ' ') return 0;
    stringstream ss(s);
    string word;
    while (ss >> word){}
    // return (word.length() != 0)?word.length():0;
    return word.length();
}

int main(){
    cout<<lengthOfLastWord("Hello World")<<'\n'; // 5
    cout<<lengthOfLastWord("a ")<<'\n'; // 1
    cout<<lengthOfLastWord("    ")<<'\n'; // 1
    return 0;
}