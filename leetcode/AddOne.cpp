#include<bits/stdc++.h>
using namespace std;

void printIt(vector<int> & digits){
    for(int i = 0; i < digits.size(); i++){
        cout<<digits[i]<<" ";
    }
    cout<<"\n";
}

vector<int> addOne(vector<int> &digits){
    for(int i = digits.size()-1; i >= 0; i--){

        if(i == 0 && digits[i] == 9){
            digits[i] = 0;
            digits.insert(digits.begin(), 0);
        }

        // Setting if it is nine then setting it 0 so that carry over is 1
        if(digits[i] == 9) digits[i] = 0;

        // If it is not nine then add 1
        else{ digits[i] = digits[i]+1; break; }
    }
    return digits;
}

int main(){
    vector<int> test1{9,9};
    addOne(test1);
    printIt(test1);

    vector<int> test2{1,2,3};
    addOne(test2);
    printIt(test2);
    return 0;
}