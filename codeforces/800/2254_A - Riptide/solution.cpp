#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b || a==c || b==c){
            cout<<0<<endl;
            continue;
        }
        int mid=a+b+c-max({a,b,c})-min({a,b,c});
        int mx=max({a,b,c});
        int mn=min({a,b,c});
        cout<<min(mx-mid,mid-mn)<<endl;
    }
}