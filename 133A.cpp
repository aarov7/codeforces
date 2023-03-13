#include<bits/stdc++.h>
using namespace std;
void solve(){
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9'){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    solve();
}
