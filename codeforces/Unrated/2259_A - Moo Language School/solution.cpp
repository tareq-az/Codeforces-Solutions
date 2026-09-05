#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
 
    int extra_cost = 0;
    for (int i = 0; i < n; i += k) {
        bool has_zero = false;
        for (int j = i; j < i + k; j++) {
            if (s[j] == '0') {
                has_zero = true;
                break;
            }
        }
        if (!has_zero) {
            extra_cost++;
        }
    }
 
    cout << extra_cost << "
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