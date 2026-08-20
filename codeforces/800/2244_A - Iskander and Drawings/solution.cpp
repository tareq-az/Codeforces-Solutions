#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int mx=0;
        int count=0;
 
        for(int i=0; i<n; i++){
           if(s[i]=='#'){
              count++;
              mx=max(count, mx);
           }
           else {
            count=0;
           }
        }
 
        if(mx==0 ){
            cout<<mx<<endl;
        }else if(mx%2==0){
            cout<<mx/2<<endl;
        } else cout<<(mx/2)+1<<endl;
        
    }
}