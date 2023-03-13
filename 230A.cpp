#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n);//sort on the basis of strength
    for(int i=0;i<n;i++){
        if(s<=arr[i].first){
            cout<<"NO"<<endl;
            return 0;
        }
        s+=arr[i].second;
    }
    cout<<"YES"<<endl;
    return 0;
}