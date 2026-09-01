#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        long long m;
 
        cin >> n >> k >> m;
 
        if (k > m) {
            cout << "NO
";
            continue;
        }
 
        cout << "YES
";
 
        for (int i = 1; i <= n; i++) {
            if (i % k == 0) {
                cout << m - k + 1 << " ";
            } else {
                cout << 1 << " ";
            }
        }
 
        cout << '
';
    }
 
    return 0;
}