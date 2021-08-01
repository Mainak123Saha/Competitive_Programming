#include<bits/stdc++.h>
using namespace std;

string multiply_char(char c, int a){
    string multiplied_char = "";
    for(int i = 0; i < a; i++){
        multiplied_char.push_back(c);
    }
    return multiplied_char;
}
string solve(string s) {
    string ans = "";
    for(int i = 0; i < (int)s.size(); i++){
        int number = 0;
        while((int)s[i] < 'a'){
            number = number * 10 + (s[i]-'0');
            i++;
        }
        ans += multiply_char(s[i], number);
    }
    return ans;
}

int main(){
    
    return 0;
}