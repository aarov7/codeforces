#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n],total=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total+=arr[i];
    }
    sort(arr,arr+n,greater<int>());//sorted in descending order
    int count=0,sum=0,remaining=total;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        remaining-=arr[i];
        count++;
        if(sum>remaining){
            cout<<count<<endl;
            return;
        }
    }
}
int main(){
    solve();
    return 0;
}