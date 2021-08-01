#include<bits/stdc++.h>
using namespace std;

void test(){
    int n, x;
    scanf("%d %d", &n, &x);
    long long maxBeauty = 0;
    long long minBeauty = 0;
    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        minBeauty += a;
        maxBeauty += ceil((a * 1.0) / x);
    }
    minBeauty = ceil((minBeauty * 1.0)/x);

    printf("%lld %lld\n", minBeauty, maxBeauty);
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}