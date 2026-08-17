#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool prime=true;
        for(int i=2; i*i<=n+1; i++){
            if((n+1)%i==0){
                prime=false;
            }
        }
        if(prime){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}