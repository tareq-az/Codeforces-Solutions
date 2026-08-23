#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int, int>m;
        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            m[val]++;
        }
        int total=0;
        for(auto x:m){
            if(x.first<x.second){
                total+=x.second-x.first;
            }
            else if(x.first>x.second){
                total+=x.second;
            }
        }
        cout<<total<<endl;
    }
}