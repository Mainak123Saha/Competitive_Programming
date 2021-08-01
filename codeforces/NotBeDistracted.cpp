#include<bits/stdc++.h>
using namespace std;

bool isThereBetween(vector<char> &doneTask, char c){
    for(int i = 0; i < doneTask.size()-1; i++){
        if(c == doneTask[i]) return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        int l;
        cin>>l;
        char task[l];
        cin>>task;

        bool isDis = false;
        vector<char> doneTask{task[0]};
        for(int i = 0; i < strlen(task); i++){
            if(task[i] == doneTask[doneTask.size()-1]) continue;
            else if(isThereBetween(doneTask, task[i])){ isDis = true; break; }
            else doneTask.push_back(task[i]);
        }
        if(isDis) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}