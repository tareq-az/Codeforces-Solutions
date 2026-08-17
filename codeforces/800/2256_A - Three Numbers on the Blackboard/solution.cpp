#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int currange=max({a,b,c})-min({a,b,c});
        if(a<c && b<c){
            c=a+b;
        }else if(b<a && c<a){
            a=b+c;
        }else if(a<b && c<b){
            b=a+c;
        }
        int range=max({a,b,c})-min({a,b,c});
        cout<<min(currange,range)<<endl;
    }
}