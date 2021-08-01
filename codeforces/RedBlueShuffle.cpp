#include<bits/stdc++.h>
using namespace std;

void test(){
    int n;
    scanf("%d", &n);
    char r[n], b[n];
    scanf("%s  %s", r, b);
    int red_win_count = 0, blue_win_count = 0;
    for(int i = 0; i < n; i++){
        if((int)r[i] > (int)b[i]) red_win_count++;
        else if((int)r[i] < (int)b[i]) blue_win_count++;
    }
    if(red_win_count == blue_win_count){
        printf("EQUAL\n");
    }
    else if(red_win_count > blue_win_count){
        printf("RED\n");
    }
    else{
        printf("BLUE\n");
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