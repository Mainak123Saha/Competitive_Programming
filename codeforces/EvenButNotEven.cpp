#include<bits/stdc++.h>
using namespace std;

bool sumOfDigitsEven(string &s){
    long long n = 0;
    for(size_t i = 0; i < s.length(); i++){
        n += (long long)s[i];
    }
    return n%2 == 0;
}

void test(){
    long long n;
    string strNum;
    cin>>n>>strNum;
    if(strNum.length() < 2){ // If it is less than 11 then it can be even but not even
        cout<<-1<<'\n';
        return;
    }
    // changin the integer to string
    long long lastPlaceOfOdd = -1;
    long long oddCount = 0;
    for(int i = 0; i < (int)strNum.length(); i++){
        if(((long long)strNum[i])%2 == 1){ // It marks that where is the place of the oddNo
            lastPlaceOfOdd = i;
            oddCount++;
        }
        if(strNum[i] == '0'){ strNum.erase(strNum.begin()+i); i--; } // It removes if any zero is contained by the number
    }
    if(lastPlaceOfOdd == -1 or oddCount < 2){ // If there is no odd number then it is even but not even
        cout<<-1<<'\n';
        return;
    }
    if(lastPlaceOfOdd != (int)strNum.length()-1) strNum.resize(lastPlaceOfOdd+1); // resize it till the last odd number
    if(sumOfDigitsEven(strNum) == false){ // If sum of digits is not even
        for(int i = 0; i < n; i++){
            if(((long long)strNum[i])%2 == 1){ // It erase one of the odd number from the string
                strNum.erase(strNum.begin()+i);
                break;
            }
        }
    }
    cout<<strNum<<'\n';
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}