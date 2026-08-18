#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
 
        int count_3=0;
        int count_2=0;
 
        for(int i=0; i<k; i++){
             long long c;
             cin>>c;
             if(c>=3){
                count_3++;
             }else if(c>=2){
                count_2++;
             }
        }
        if(count_3>=1 || count_2>=2){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}