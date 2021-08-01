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

void moveZeroes(vector<int>& nums) {
    int till = (int)nums.size();
    for(int i = 0; i < till; i++){
        if(nums[i] == 0){
            nums.erase(nums.begin()+i);
            nums.push_back(0);
            i--;
            till--;
        }
    }
}


int main(){
    vector<int> a{0,1,0,3,12};
    moveZeroes(a);
    printVector(a);
    return 0;
}