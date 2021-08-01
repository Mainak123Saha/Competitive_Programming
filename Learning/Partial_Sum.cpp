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

int main(){
    vector<int> a{1, 2, 3, 18};
    /*
        This gives the sum of all the things like
        a1, a1+a2, a1+a2+a3, a1+a2+a3+a4, a........
        To the specified place
    */
    partial_sum(a.begin(), a.end(), a.begin());
    printVector(a);
    // Returns the max element inside the thing
    cout << *max_element(a.begin(), a.end())<< '\n';
    return 0;
}