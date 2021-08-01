#include<bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> a;
    for(int i = 0; i < (int) magazine.size(); i++){
        a[magazine[i]]++;
    }
    for(int i = 0; i < (int)ransomNote.size(); i++){
        if(a[ransomNote[i]] == 0){
            return false;
        }
        else{
            a[ransomNote[i]]--;
        }
    }
    return true;
}

int main(){
    cout << canConstruct("45", "454") << '\n';
    return 0;
}