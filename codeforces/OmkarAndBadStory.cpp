#include<bits/stdc++.h>
using namespace std;

void test(){
    int n;
    scanf("%d", &n);
    int minK = INT_MAX, maxK = INT_MIN;
    for(int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);
        minK = min(a, minK);
        maxK = max(a, maxK);
    }
    if(minK < 0){
        printf("NO\n");
        return;
    }
    else{
        printf("YES\n%d\n", maxK+1);
        for(int i = 0; i <= maxK; i++){
            if(i == maxK) printf("%d\n", i);
            else printf("%d ", i);
        }
    }
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}