#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxPro = 0, minPrice = INT_MAX;
    for(size_t i = 0; i < prices.size(); i++){
        if(prices[i] < minPrice) minPrice = prices[i];
        else if(prices[i] - minPrice > maxPro) maxPro = prices[i] - minPrice;
    }
    return maxPro;
}

int main(){
    return 0;
}