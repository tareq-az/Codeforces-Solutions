#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                v.push_back(-1); 
            } else {
                v.push_back(3); 
            }
        }
        
       
        if (n % 2 == 0) {
            v.back() = 2;
        }
        
        for (auto a : v) {
            cout << a << " ";
        }
        cout << "
";
    }
    return 0;
}