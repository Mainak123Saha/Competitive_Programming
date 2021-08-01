#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	for(int i = 0; i < T; i++){
		long long r, c, n;
		cin>>r>>c>>n;
		
		long long R, C;
		
		if(n%r==0){
			C = n/r;
			R = r;
		}
		else{
			C = n/r + 1;
			R = n%r;
		}
		long long res = c*(R-1) + C;
		cout<<res<<'\n';
	}
}
