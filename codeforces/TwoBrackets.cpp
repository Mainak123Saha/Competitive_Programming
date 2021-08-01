#include<bits/stdc++.h>
using namespace std;

void test(){
    string brackets;
    cin>>brackets;
    int curveBracketsOpen = 0, boxBracketsOpen = 0, ans = 0;
    for(int i = 0; i < (int)brackets.length(); i++){
        if(brackets[i] == ')'){
            if(curveBracketsOpen){
                ans++;
                curveBracketsOpen--;
            }
        }
        else if(brackets[i] == ']'){
            if(boxBracketsOpen){
                ans++;
                boxBracketsOpen--;
            }
        }
        else if(brackets[i] == '(')
            curveBracketsOpen++;
        else
            boxBracketsOpen++;
    }
    printf("%d\n", ans);
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}