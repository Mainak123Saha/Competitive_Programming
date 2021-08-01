#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string filename;
    cin>>filename;
    int gotX = 0;
    int toBeRemoved = 0;
    for(int i = 0; i < n; i++){
        if(filename[i] == 'x'){
            if(gotX >= 2) toBeRemoved++;
            else gotX++;
        }
        else gotX = 0;
    }
    cout<<toBeRemoved<<'\n';
    return 0;
}