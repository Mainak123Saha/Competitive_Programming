#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

template<typename t>
void printVector(vector<t> n){
    for(size_t i = 0; i < n.size(); i++){
        if(i != n.size()-1){
            cout<<n[i]<<' ';
        }
        else{
            cout<<n[i];
        }
    }
    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    long long n;
    cin >> n;
    float can = floor(n*1.0/2);
    vector<long long> a(n), b(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n > 2){
        if(n%2 == 0)
            cout << can-1 << endl;
        else
            cout << can << endl;
    }
    else{
        cout << 0 << endl;
    }

    sort(a.begin(), a.end());
    for(long long i = 1, j = 0; j < can; i+=2, j++){
        b[i] = a[j];
    }
    for(long long i = 0, j = can; j < n; j++, i+=2){
        b[i] = a[j];
    }
    // int low = 0, high = n-2;
    // while(low < high){
    //     swap(a[low], a[high]);
    //     high-= 2;
    //     low += 2;
    // }
    printVector(b);
    return 0;
}