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
        vector<int> v(n);
        
        bool has_even = false;
        bool has_odd = false;
        
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] % 2 == 0) has_even = true;
            else has_odd = true;
        }
        
        if(has_even && has_odd){
            sort(v.begin(), v.end());
        }
        
        for(auto x : v){
            cout << x << " ";
        }
        cout << "
";
    }
}