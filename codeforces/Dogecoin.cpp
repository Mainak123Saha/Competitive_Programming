#include<bits/stdc++.h>
using namespace std;

int main(){
    // Taking the days of deals
    int n;
    cin>>n;
    // Initializing the deals
    vector<int> c;
    for(int i = 0; i < n; i++){
        // Taking all the deals as per days
        int C;
        cin>>C;
        c.push_back(C);
    }
    // Taking the number of plans
    int q;
    cin>>q;
    for(int i = 0; i < q; i++){
        // Taking each plans
        int l, r;
        cin>>l>>r;
        // The maxEarning of the person
        int maxEarnings = 0;
        int nextDeal = l-1;
        for(int d = l-1; d < r; d++){
            if(c[d] > c[nextDeal]) nextDeal = d;
        }
        for(int j = l-1, coins = 1; j < r; j++, coins++){
            // Spending all the dogecoins in the best deal of the day
            if(j == nextDeal){
                maxEarnings += c[j] * coins;
                coins = 0;
                nextDeal++;
                // Getting the information about the next big deal
                for(int d = nextDeal; d < r; d++){
                    if(c[d] > c[nextDeal]) nextDeal = d;
                }
            }
        }
        cout<<maxEarnings<<'\n';
    }
    return 0;
}
/*
Tests
5
4 1 2 3 2
4
1 5
2 4
3 5
5 5

Answers
15
9
8
2
*/