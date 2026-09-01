#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,j,k;
        cin>>n>>j>>k;
        vector<int>v(n);
        int key;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(i==(j-1)){
               key=v[i];
            }
        }
        int mx=*max_element(v.begin(), v.end());
        if((mx==key && k==1) || k>1){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
        
    }
}
 