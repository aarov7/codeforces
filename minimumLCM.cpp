#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll HCF(ll a, ll b){
    int q,r;
    while(b>0){
        q=a/b;
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
ll LCM(ll a, ll b){
    int hcf=HCF(a,b);
    return (a*b)/hcf;
}
void solve(){
    ll n;
    cin>>n;
    int a,b;
    if(n%2==0){
        a=b=n/2;
    }
    else{
        
    }
    cout<<a<<" "<<b<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}