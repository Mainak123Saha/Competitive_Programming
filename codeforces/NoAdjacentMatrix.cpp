#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void printVector(vector<vector<int>> n){
    for(size_t i = 0; i < n.size(); i++){
        for(size_t j = 0; j < n[i].size(); j++){
            if(j != n[i].size()-1){
                cout<<n[i][j]<<' ';
            }
            else{
                cout<<n[i][j];
            }
        }
        cout<<endl;
    }
}

void test(){
    int n;
    cin >> n;
    if(n == 2){
        cout << -1 << endl;
        return;
    }
    if(n == 1){
        cout << 1 << endl;
        return;
    }
    int sq = n*n;
    vector<int> nums;
    int addPos = 1;
    bool timeOver = false;
    vector<vector<int>> notAdjacentMatrix(n);
    int c = 0;
    while(c < n){
        if(c != 0 && !timeOver){
            addPos++;
        }
        int r = 0;
        while(r < n && !timeOver){
            if(addPos == sq || addPos == sq-1){
                if(addPos == sq-1){
                    nums.insert(nums.begin()+1, addPos+1);
                    nums.push_back(addPos);
                }
                addPos = 0;
                timeOver = true;
                break;
            }
            if(r != 0){
                addPos += 2;
            }
            notAdjacentMatrix[c].push_back(addPos);
            if(!(r == 0 && c == 0) && r != 0) nums.push_back(addPos-1);
            r++;
        }
        while(r < n && timeOver){
            notAdjacentMatrix[c].push_back(nums[addPos]);
            r++;
            addPos++;
        }
        c++;
    }
    printVector(notAdjacentMatrix);
}

int main(){
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}
