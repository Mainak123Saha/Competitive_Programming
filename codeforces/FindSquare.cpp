#include<bits/stdc++.h>
using namespace std;

int main(){
    // Print middle of the B square
    int n, m;
    cin>>n>>m;
    vector<string> wb(n);
    for(int y = 0; y < n; y++){
        cin>>wb[y];
    }
    int firstX = -1, lastX = -1, firstY = -1, lastY = -1;
    for(int y = 0; y < n; y++){
        for(int x = 0; x < m; x++){
            if(wb[y][x] == 'B'){
                if(firstX == -1){
                    firstX = x+1;
                    lastX = x+1;
                    firstY = y+1;
                    lastY = y+1;
                }
                else{
                    lastX = x+1;
                    lastY = y+1;
                }
            }
        }
    }
    // cout<<"First x and y is: "<<firstX<<", "<<firstY<<"\nLast x and y is: "<<lastX<<", "<<lastY<<'\n';
    cout<<(firstY+lastY)/2<<" "<<(firstX+lastX)/2<<'\n';
    return 0;
}