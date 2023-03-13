#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char arr[101];
        cin>>arr;
        int s=arr[0]-'0';
        for(int i=1;i<n;i++){
            int curr=arr[i]-'0';
            if(curr==1){
                if(s>=0){
                    cout<<"-";
                    s-=curr;
                }
                else{
                    cout<<"+";
                    s+=curr;
                }
            }
            else{
                cout<<"+";
            }
        }
        cout<<endl;
    }
}