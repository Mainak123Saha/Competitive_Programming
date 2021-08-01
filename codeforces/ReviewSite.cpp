#include<bits/stdc++.h>
using namespace std;

void test(){
    int n;
    cin >> n;
    int upvotes = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a == 1 || a == 3){
            upvotes++;
        }
    }
    printf("%d\n", upvotes);
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}