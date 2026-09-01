#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<long long> g(n);
 
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }
 
    sort(g.begin(), g.end());
 
    long long ans = 0;
 
    for (int i = n - 1; i >= 0; i -= 2) {
        ans += g[i];
    }
 
    cout << ans << '
';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}