#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int longest = 0;
    int i = 0;
    int j = 0;
    unordered_map<char, int> chars;
    while(j < (int)s.size()){
        if(!chars[s[j]]){
            chars[s[j]]++;
            j++;
        }
        else{
            while(chars[s[j]]){
                chars[s[i]]--;
                i++;
            }
        }
        longest = max(longest, j-i);
    }
    return longest;
}

int main(){
    cout << lengthOfLongestSubstring("abcabcbb") << endl;
    cout << lengthOfLongestSubstring("bbbbb") << endl;
    cout << lengthOfLongestSubstring("pwwkew") << endl;
    cout << lengthOfLongestSubstring("") << endl;
    return 0;
}