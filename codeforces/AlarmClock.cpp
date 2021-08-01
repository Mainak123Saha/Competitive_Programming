#include<bits/stdc++.h>
using namespace std;

void test(){
    // He has to sleep till a minutes to fell refresh
    long long a;
    // first alarm in b minutes
    long long b;
    // If he slept less than a, he sets alarm to c minutes
    long long c;
    // He fall asleep in d minutes after setting alarm
    long long d;
    cin>>a>>b>>c>>d;
    if(a <= b){ cout<<b<<'\n'; return; }
    if(c <= d){ cout<<-1<<'\n'; return; } // If after setting alarm he did not got to sleep

    long long ans = b;
    long long more = a-b;
    long long one = c - d;
    more = ((a-b+one-1)/one)*c;
    ans += more;
    cout<<ans<<'\n';
    return;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}