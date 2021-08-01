#include<bits/stdc++.h>
using namespace std;

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */
int guess(int n){
    int a = 6;
    if(n == a) return 0;
    if(n > a) return -1;
    else return 1;
}

int guessNumber(int n) {
    long long t = 0;
    for(int b = n/2; b >= 1; b/=2){
        while(b+t < n && (guess(b+t) == 1)) t += b;
    }
    return t+1;
}

int main(){
    cout << guessNumber(10) << '\n';
    cout << guessNumber(100) << '\n';
    return 0;
}