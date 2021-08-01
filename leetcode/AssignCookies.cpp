#include<bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int toBeStatisfied = 0;
    for(int i = 0, j = 0; i < (int)g.size() && j < (int)s.size(); i++, j++){
        while(s[j] < g[i]){
            j++;
            if(j == (int)s.size())
                return toBeStatisfied;
        }
        toBeStatisfied++;
    }
    return toBeStatisfied;
}

int main(){
    
    return 0;
}