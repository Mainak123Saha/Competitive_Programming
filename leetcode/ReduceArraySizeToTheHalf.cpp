#include<bits/stdc++.h>
using namespace std;

int minSetSize(vector<int> arr) {
        if(arr.size() == 0)
            return 0;
        sort(arr.begin(), arr.end());
        multiset<int> a;
        set<int> b;
        for(int n : arr){
            a.insert(n);
            b.insert(n);
        }
        vector<int> c;
        for(int n : b){
            c.push_back(a.count(n));
        }
        sort(c.begin(), c.end());
        int ans = 0;
        for(int i = (int)c.size()-1, j = 0; j < (int)arr.size()/2; i--){
            j += c[i];
            ans++;
        }
        return ans;
}

int main(){
    cout << minSetSize({3,3,3,3,5,5,5,2,2,7}) << endl;
    cout << minSetSize({9,77,63,22,92,9,14,54,8,38,18,19,38,68,58,19}) << endl; // 5
    return 0;
}