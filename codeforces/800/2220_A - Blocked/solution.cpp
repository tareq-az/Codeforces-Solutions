#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      set<int, greater<int>> s;
      for(int i=0; i<n; i++){
        int val;
        cin>>val;
        s.insert(val);
      }
      if(s.size()!=n){
        cout<<"-1"<<endl;
      }else {
        for(auto x:s){
            cout<<x<<" ";
        }
        cout<<endl;
      }
    }
}