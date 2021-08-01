#include<bits/stdc++.h>
using namespace std;

int test(vector<int> arr){
    int max_so_far = INT_MIN, max_ending = 0;
    for(int i = 0; i < (int)arr.size(); i++){
        max_ending = max_ending + arr[i];
        max_so_far = max(max_so_far, max_ending);
        max_ending = max(max_ending, 0);
    }
    return max_so_far;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        cout<<test(arr)<<'\n';
    }
    return 0;
}