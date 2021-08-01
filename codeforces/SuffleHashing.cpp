#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void test(){
    string p, h;
    cin >> p >> h;
    vector<int> cntp(26);
	for(char c : p)
		++cntp[c - 'a'];
	for(int i = 0; i < (int)h.size(); i++){
		vector<int> cnth(26);
		for (int j = i; j < (int)h.size(); ++j){
			++cnth[h[j] - 'a'];
			if (cntp == cnth){
				cout << "YES" << endl;
				return;
			}
		}
	}
    cout << "NO" << endl;
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