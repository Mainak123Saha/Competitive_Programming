#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() > 0){
        string ans = strs[0];
        for(size_t i = 1; i < strs.size(); i++){
            if(ans.length() > strs[i].length()){
                ans = ans.substr(0, strs[i].length());
            }
            for(size_t j = 0; j < strs[i].length(); j++){
                if(j >= ans.length()){
                    break;
                }
                if(ans[j] != strs[i][j]){
                    ans = ans.substr(0, j);
                }
            }
        }
        return ans;
    }
    else{
        return "";
    }
}

int main(){
    vector<string> fl {"flower","flow","flight"};
    vector<string> no {"dog","racecar","car"};
    vector<string> str {"string","strsub","strbus"};
    vector<string> a {"ab", "a"};
    cout<<longestCommonPrefix(fl)<<"\n";
    cout<<longestCommonPrefix(no)<<"\n";
    cout<<longestCommonPrefix(str)<<"\n";
    cout<<longestCommonPrefix(a)<<"\n";
    return 0;
}