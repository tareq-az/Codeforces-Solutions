#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int current_ones = 0;
    bool possible = true;
    for (char c : s) {
        if (c == '1') {
            current_ones++;
            if (current_ones >= k) {
                possible = false;
                break;
            }
        } else {
            current_ones = 0;
        }
    }
 
    if (!possible) {
        cout << "NO
";
        return;
    }
    cout << "YES
";
    vector<int> p(n);
    int small = 1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            p[i] = small++;
        }
    }
 
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            p[i] = small++;
        }
    }
 
    for (int i = 0; i < n; i++) {
        cout << p[i] << (i == n - 1 ? "" : " ");
    }
    cout << "
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