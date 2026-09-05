#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr;
        if(n==2){
            cout<<-1<<endl;
            continue;
        }
        long long j=1;
        for(int i=1; i<=n; i++){
            if(j<3){
                arr.push_back(j);
                j++;
            }else {
                arr.push_back(j);
                j*=2;
            }
        }
        for(auto x:arr){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}