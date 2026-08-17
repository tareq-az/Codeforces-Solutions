#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        long long a1, b1, temp;
        
        cin >> a1;
        for (int i = 1; i < n; i++) cin >> temp;
        
        cin >> b1;
        for (int i = 1; i < m; i++) cin >> temp;
        
        long long bea_attck = b1 + m - 1;
        long long ver_attck = a1 + n - 1;
        
        if (bea_attck <= ver_attck) {
            cout << 1 << "
";
        } else {
            cout << 2 << "
";
        }
    }
    return 0;
}