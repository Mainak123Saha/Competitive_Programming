#include<bits/stdc++.h>
using namespace std;

void test(){
    int r, b, d;
    scanf("%d %d %d", &r, &b, &d);
    int maxi = max(r, b);
    int mini = min(r, b);
    int more = maxi - mini;
    int need = more / mini;
    if (more % mini != 0) need++;
    cout<<(need <= d ? "YES\n" : "NO\n");
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}