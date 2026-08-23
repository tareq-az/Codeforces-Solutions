#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        int mx=0;
        switch(n){
        case 1:
            cout<< 1 <<endl;
            continue;
        case 2:
            cout<< 9 <<endl;
            continue;
        case 3:
             cout<< 29 <<endl;
             continue;
        case 4:
             cout<< 56 <<endl;
            continue;
        default:
          cout<<5*(n*n-n-1)<<endl;
            continue;          
 
        }
        
    }
 
    return 0;
}