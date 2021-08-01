#include<bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
    if(needle.empty())
        return 0;
    int n = needle.size(), h = haystack.size(), j;
    if(n > h)
        return -1;
    for(int i = 0; i < h-n+1; i++){
        if(haystack[i] == needle[0]){
            for(j = 1; j < n; j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
            }
            if(j == n)
                return i;
        }
    }
    return -1;
}

int main(){
    cout << strStr("hello", "ll") << endl;
    cout << strStr("abb", "abaaa") << endl;
    return 0;
}