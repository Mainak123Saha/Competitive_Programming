#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int binarySearch(vector<int> arr, int n, int x){
    int k = 0;
    for (int b = n/2; b >= 1; b /= 2) {
        while (k+b < n && arr[k+b] <= x) k += b;
    }
    if(arr[k] == x){
        return k;
    }
    else{
        return -1;
    }
}

int main(){
    cout << binarySearch({-1, 0, 2, 3}, 4, 0) << endl;
    return 0;
}