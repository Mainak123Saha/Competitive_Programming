#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix.size(); j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    return matrix;
}

int main(){
    
    return 0;
}