#include<bits/stdc++.h>
using namespace std;

int max_subarray(vector<int> arr){
    int max_so_far = INT_MIN, max_ending = 0;
    for(int i = 0; i < (int)arr.size(); i++){
        max_ending = max_ending + arr[i];
        max_so_far = max(max_so_far, max_ending);
        max_ending = max(max_ending, 0);
    }
    return max_so_far;
}

int main(){
    cout<<max_subarray(vector<int>{-2,1,-3,4,-1,2,1,-5,4})<<'\n';
    return 0;
}
