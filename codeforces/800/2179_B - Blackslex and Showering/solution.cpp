// Online C++ compiler to run C++ program online
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
        int total=0;
        for(int i=0; i<v.size()-1; i++){
            total+=abs(v[i]-v[i+1]);
        }
        int min_ans=total;
        min_ans=min(total-abs(v[0]-v[1]), min_ans);
        min_ans=min(total-abs(v[n-1]-v[n-2]), min_ans);
        for(int i=1; i<n-1; i++){
             int min_total=total-(abs(v[i-1]-v[i])+abs(v[i]-v[i+1]))+abs(v[i-1]-v[i+1]);
              min_ans=min(min_ans, min_total);
        }
        cout<<min_ans<<endl;
    }
}