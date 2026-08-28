#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<long long>());
 
    bool flag = true;
 
    for (int i = 0; i < n - 2; i++) {
        if (v[i] % v[i + 1] != v[i + 2]) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << v[0] << " " << v[1] << "
";
    } else {
        cout << -1 << "
";
    }
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