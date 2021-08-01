#include<bits/stdc++.h>
using namespace std;

void test(){
    long long x, y, n;
    cin>>x>>y>>n;
    if (n - n % x + y <= n) {
		cout << n - n % x + y << endl;
	} else {
		cout << n - n % x - (x - y) << endl;
	}
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}