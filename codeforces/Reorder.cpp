#include<bits/stdc++.h>
using namespace std;

void test(){
    int n, m;
    scanf("%d %d", &n, &m);
    int sum = 0;
    for(int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);
        sum += a;
    }
    if(sum == m) printf("YES\n");
    else printf("NO\n");
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}