#include<bits/stdc++.h>
using namespace std;

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

void test(){
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int sumOfPositive = 0, sumOfNegative = 0;
    for(int i = 0; i < n; i++){
        if(a[i] >= 0){
            sumOfPositive += a[i];
        }
        else{
            sumOfNegative += a[i];
        }
    }
    if(sumOfNegative + sumOfPositive == 0){
        cout<<"NO\n";
        return;
    }
    sort(a.begin(), a.end());
    if(sumOfPositive > abs(sumOfNegative)){
        reverse(a.begin(), a.end());
    }
    printf("YES\n");
    printVector(a);
}

int main(){
    int T;
    cin>>T;
    while(T--){
        test();
    }
    return 0;
}