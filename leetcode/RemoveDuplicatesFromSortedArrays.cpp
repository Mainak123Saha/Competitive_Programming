#include<bits/stdc++.h>
using namespace std;
void printIt(vector<int> &digits);
int removeDuplicates(vector<int>& nums) {
    if(nums.size() == 0) return 0;
    int lastOne = nums[0]-1;
    for(int i = 0; i < nums.size(); i++){
        if(lastOne != nums[i]) lastOne = nums[i];
        else nums.erase(nums.begin()+i--);
    }
    return nums.size();
}

int main(){
    // Test 1
    vector<int> test1{};
    removeDuplicates(test1);printIt(test1);

    // Test 2
    vector<int> test2{1, 1, 1, 2};
    removeDuplicates(test2);printIt(test2);

    // Test 3
    vector<int> test3{1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 10, 10,  };
    removeDuplicates(test3);printIt(test3);
    return 0;
}

void printIt(vector<int> & digits){
    for(int i = 0; i < digits.size(); i++){
        cout<<digits[i]<<" ";
    }
    cout<<"\n";
}