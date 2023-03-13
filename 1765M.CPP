#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    //minimize i*(n-i) and maximize gcd(i,n-i)
    while(t--){
        ll n;
        cin>>n;
        ll a=1;
        for(ll i=2;i*i<=n;i++){
            if(n%i==0){
                a=n/i;
                break;
            }
        }
        cout<<a<<" "<<n-a<<endl;
    }
}