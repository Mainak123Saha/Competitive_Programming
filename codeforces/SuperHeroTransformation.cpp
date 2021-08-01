#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool isVowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o');
}

int main(){
    ios::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    if(a.size() != b.size()){
        cout << "NO" << endl;
        return 0;
    }
    bitset<1000> curr, toTan;
    for(int i = 0; i < (int) a.size(); i++){
        curr[i] = isVowel(a[i]);
    }
    for(int i = 0; i < (int) b.size(); i++){
        if(curr[i] != isVowel(b[i])){
            cout << "NO";
            return 0;
        }
    }
        cout << "YES" << endl;
    return 0;
}