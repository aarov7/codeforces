#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int count1=0;
    for(int& ai:arr){
        cin>>ai;
        if(ai==1)
            count1++;
    }
    cout<<count1/2+(n-count1)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}