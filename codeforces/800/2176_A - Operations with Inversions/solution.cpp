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
        cin>>v[i];
      }
      int count=0;
      for(int i=0; i<v.size()-1; i++){
        for(int j=i+1; j<v.size();){
            if(v[i]>v[j]){
                v.erase(v.begin()+j);
                count++;
            }else j++;
        }
      }
      cout<<count<<endl;
    }
}