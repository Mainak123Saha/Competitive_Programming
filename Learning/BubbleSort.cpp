#include<bits/stdc++.h>
using namespace std;

template<typename t>
void printVector(vector<t> n){
    for(size_t i = 0; i < n.size(); i++){
        if(i != n.size()-1){
            cout<<n[i]<<' ';
        }
        else{
            cout<<n[i];
        }
    }
    cout<<'\n';
}

vector<int> bubbleSort(vector<int> nums){
    for(int i = 0; i < (int)nums.size(); i++){
        for(int j = 0; j < (int) nums.size()-1; j++){
            if(nums[j-1] > nums[j]){
                swap(nums[j-1], nums[j]);
            }
        }
    }
    return nums;
    is_sorted(nums);
}

int main(){
    printVector(bubbleSort({4, 2, 1, 5, 7}));
    return 0;
}