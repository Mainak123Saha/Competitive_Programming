#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int i = 0; i < T; i++){
        int C;
        cin>>C;
        int two = 0, one = 0;
        for(int j = 0; j < C; j++){
            int w;
            cin>>w;
            if(w == 1){ one++; }
            else{ two++; }
        }
        if(two%2==1 && one<2){
			cout<<"NO\n";
			continue;
		}
		else if(two%2==1 && one>1){
			one-=2;
		}
		
		if(one%2==0){
			cout<<"YES\n";
			continue;
		}
		else{
			cout<<"NO\n";
		}
    }
    return 0;
}
