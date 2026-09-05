#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int found_pair=0;
    for(int i=0; i<s.size()-1; i++){
      if(s[i]==s[i+1]){
        found_pair++;
      }
    }
    if(found_pair>=3){
      cout<<"NO"<<endl;
    }else cout<<"YES"<<endl;
  }
}