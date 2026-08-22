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
        sort(v.begin(), v.end());
        int mid;
    
        if(n%2!=0){
            mid=n/2+1;
        } else mid=n/2;
        int i=0; int j=n-1;
        int count=0;
        while(i<j){
            if(v[i]!=v[mid] || v[j]!=v[mid]){
                count++;
                i++;
                j--;
            }else{
                i++;
                j--;
            }
        }
        cout<<count<<endl;
    }
}