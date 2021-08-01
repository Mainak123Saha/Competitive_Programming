#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    bool palindrome = true;
    string n = to_string(x);
    reverse(n.begin(), n.end());
    for (int i = 0, j = n.length()-1; i < n.length(); i++, j--){
        if(n[i] != n[j]){
            palindrome = false;
            break;
        }
    }
    return palindrome;
}

int main(){
    cout<<isPalindrome(55)<<"\n";
    cout<<isPalindrome(545)<<"\n";
    return 0;
}