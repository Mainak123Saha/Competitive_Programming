#include<bits/stdc++.h>
using namespace std;

void test(){
    long long arrLen;
    cin>>arrLen;
    bool isPerf = true;
    for(int i = 0; i < arrLen; i++){
        long long num;
        cin>>num;
        long long sq = sqrt(num);
        if((sq * sq) != num){ isPerf = false; }
    }
    if(isPerf) cout<<"NO\n";
    else cout<<"YES\n";
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}