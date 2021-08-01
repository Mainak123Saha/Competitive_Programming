#include<bits/stdc++.h>
using namespace std;

string licenseKeyFormatting(string s, int k) {
    string ans = "";
    for(char c : s){
        if(c == '-') continue;
        ans.push_back(c);
    }
    s = ans;
    ans = "";
    int extra = s.size()%k;
    if(extra){
        int l = 0;
        while(l < extra){
            ans.push_back(toupper(s[l]));
            l++;
        }
        ans.push_back('-');
    }
    for(int i = extra, j = 0; i < (int)s.size(); i++, j++){
        if(j == k){
            j = 0;
            ans.push_back('-');
        }
        ans.push_back(toupper(s[i]));
    }
    if(ans.size() == 0){
        return "";
    }
    if(ans[ans.size()-1] == '-'){
        ans.pop_back();
    }
    return ans;
}

int main(){
    cout << licenseKeyFormatting("5F3Z-2e-9-w", 4)<< endl;
    cout << licenseKeyFormatting("2-5g-3-J", 2)<< endl;
    cout << licenseKeyFormatting("---", 3)<< endl;
    return 0;
}