#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(n<=k){
            cout<<n<<endl;
            continue;
        }
        long long rem=n-k;
        long long ans=k;
        long long i=2;
        while(rem>0){
           if(rem>=i*k){
            ans+=k;
            rem-=(i*k);
           }
           else {
            long long take = rem/i;
            ans+=take;
            break;
           }
           i*=2;
        }
        cout<<ans<<endl;
    }
}