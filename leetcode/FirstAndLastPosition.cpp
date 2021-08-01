#include<bits/stdc++.h>
#define endl '\n';
using namespace std;

void printVector(vector<int> n){
    for(size_t i = 0; i < n.size(); i++){
        cout<<n[i]<<" ";
    }
    cout<<endl;
}

vector<int> firstAndLastPosition(vector<int> nums, int target){
    // If the size is zero return 0
    if(nums.size() == 0) return vector<int>{-1, -1};

    int from = -1, to = -1;
    for(size_t i = 0; i < nums.size(); i++){

        if(nums[i] > target) return vector<int>{from, to};

        if(nums[i] == target){
            if(from == -1){
                from = to = i;
            }
            else{
                to = i;
            }
        }
    }
    return vector<int>{from, to};
}

int main(){
    vector<int> test1{5,7,7,8,8,10};
    printVector(firstAndLastPosition(test1, 8));

    printVector(firstAndLastPosition(test1, 6));

    vector<int> test2{};
    printVector(firstAndLastPosition(test2, 8));
    return 0;
}