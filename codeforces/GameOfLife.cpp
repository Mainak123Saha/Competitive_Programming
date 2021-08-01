#include<bits/stdc++.h>
using namespace std;

template<typename t>
void printVector(vector<t> n){
    for(size_t i = 0; i < n.size(); i++){
        cout<<n[i];
    }
    cout<<'\n';
}

void test(){
    int n, m;
    string elem;
    scanf("%d %d", &n, &m);
    cin >> elem;
    if(elem.find("1") == string::npos){
        cout<<elem<<'\n';
        return;
    }
    if(m > n-1){
        m = n-1;
    }
    while(m--){
        string s = elem;
        int changed = 0;
        for(int j = 0; j < n; j++){
            if(elem[j] == '0'){
                if(j != 0 && elem[j-1] == '1'){
                    changed++;
                }
                if(j != n-1 && elem[j+1] == '1'){
                    changed++;
                }
                if(changed == 1){
                    s[j] = '1';
                }
                changed = 0;
            }
        }
        elem = s;
    }
    cout<<elem<<'\n';
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}