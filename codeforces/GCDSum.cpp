#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

long long gcdOfSumOfDigits(long long n){
    string s = to_string(n);
    long long sumOfD = 0;
    for(size_t i = 0; i < s.length(); i++){
        sumOfD += (long long)s[i] - 48;
    }
    while(n%sumOfD != 0){
        long long swap = sumOfD;
        sumOfD = n%sumOfD;
        n = swap;
    }
    return sumOfD;
}

// Finding GCD of pairs
void tests(){
    long long n;
    cin>>n;
    long long ans = gcdOfSumOfDigits(n);
    while(ans==1){
        ans = gcdOfSumOfDigits(++n);
    }
    cout<<n<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        tests();
    }
    return 0;
}