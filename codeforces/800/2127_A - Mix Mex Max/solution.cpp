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
        set<int> s;
        bool has_zero = false;
        
        for(int i = 0; i < n; i++){
            int val;
            cin >> val;
            if(val == 0){
                has_zero = true;
            }
            else if(val > 0){
                s.insert(val);
            }
        }
        
        if(has_zero || s.size() > 1){
            cout << "NO
";
        } 
        else {
            cout << "YES
";
        }
    }
    return 0;
}