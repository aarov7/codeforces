#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    bool all_equal=true;
    ll n;
    cin>>n;
    ll arr[n];
    ll max=0,min=__LONG_LONG_MAX__;
    ll min_count=0,max_count=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
            max_count=0;
        }
        if(arr[i]==max){
            max_count++;
        }
        if(arr[i]<min){
            min=arr[i];
            min_count=0;
        }
        if(arr[i]==min){
            min_count++;
        }
        if(i>0&&arr[i]!=arr[i-1]){
            all_equal=false;
        }
    }
    ll ans=all_equal?n*(n-1):max_count*min_count*2LL;
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}