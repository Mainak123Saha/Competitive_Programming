#include<bits/stdc++.h>
using namespace std;

void test(){
    int n;
    scanf("%d", &n);
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<int> sortedNum = nums;
    sort(sortedNum.begin(), sortedNum.end());
    for(int i = 0; i < n; i++){
        if(sortedNum[1] != nums[i]){
            cout << i+1 << '\n';
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