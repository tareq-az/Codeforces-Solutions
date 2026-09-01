#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, s;
        cin>>n>>s;
        vector<int>v(n);
        for(int i=0; i<n; i++){
           cin>>v[i];
        }
         
         int a=abs(s-v[0]);
         int b=abs(v[n-1]-s);
          int ans=0;
         if(a<b){
             ans=a+(v[n-1]-v[0]);
         }else ans=b+(v[n-1]-v[0]);
         cout<<ans<<endl;
        
    }
}