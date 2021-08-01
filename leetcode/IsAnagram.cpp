#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.size() != t.size()) return 0;
    // for(int i = 0; i < (int) s.size(); i++){
    //     bool got = false;
    //     for(int j = 0; j < (int) t.size(); j++){
    //         if(s[i] == t[j]){
    //             got = true;
    //             t.erase(t.begin()+j);
    //             break;
    //         }
    //     }
    //     if(!got){
    //         return false;
    //     }
    // }
    // return true;

    // Ans 2
    // sort(s.begin(), s.end());
    //     sort(t.begin(), t.end());
    //     for(int i = 0; i < (int)s.size(); i++){
    //         if(s[i] != t[i]) return false;
    //     }
    //     return true;


    vector<int> a(26);
    for(int i = 0; i < (int) s.size(); i++){
        a[s[i] - 'a']++;
    }
    for(int i = 0; i < (int) t.size(); i++){
        a[t[i] - 'a']--;
        if(a[t[i] - 'a'] < 0){
            return false;
        }
    }
    return true;
}

int main(){
    cout << isAnagram("a", "a") << '\n';
    cout << isAnagram("anagram", "nagaram") << '\n';
    cout << isAnagram("anagram", "nagagam") << '\n';
    cout << (int)'a'<< " " << (int)'z'<<endl;
    return 0;
}