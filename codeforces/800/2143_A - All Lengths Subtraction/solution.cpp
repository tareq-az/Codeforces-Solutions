#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
 
    int l = 0, r = n - 1;
    bool possible = true;
    for (int val = 1; val <= n; val++) {
        if (p[l] == val) {
            l++;
        } else if (p[r] == val) {
            r--;
        } else if (val < n) {
            possible = false;
            break;
        }
    }
 
    if (possible) cout << "YES
";
    else cout << "NO
";
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