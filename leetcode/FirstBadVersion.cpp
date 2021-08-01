#include<bits/stdc++.h>
using namespace std;

int b = 2147483647;

bool isBadVersion(int n){
    return n >= b;
}

int firstBadVersion(int n) {
    int left = 0;
    int right = n;
    while(left < right){
        int mid = left + (right-left)/2;
        if(isBadVersion(mid)){
            right = mid;
        }
        else{
            left = mid + 1;
        }
    }
    return left;
}

int main(){
    cout << firstBadVersion(2147483647);
    return 0;
}