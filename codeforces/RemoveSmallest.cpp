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
    cout<<endl;
}

void test(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    sort(nums.begin(), nums.end());
    bool got = true;
    for(int i = 1; i < n && got; i++){
        got = (nums[i] - nums[i-1] <= 1);
    }
    if(got) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}