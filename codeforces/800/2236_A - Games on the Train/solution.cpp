#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        int max_val = *max_element(v.begin(), v.end());
        int min_val = *min_element(v.begin(), v.end());
        
        int ans = max_val - min_val + 1;
        cout << ans << "
";
    }
    return 0;
}