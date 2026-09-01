#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            if(val>0){
                v[i]=val;
            }else {
                v[i]=1;
            }    
        }
        int ans=accumulate(v.begin(), v.end(), 0);
        cout<<ans<<endl;
    }
}