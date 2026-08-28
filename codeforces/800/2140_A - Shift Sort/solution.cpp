#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int count_zeros = 0;
    for (char c : s) {
        if (c == '0') count_zeros++;
    }
 
    int misplaced_ones = 0;
    for (int i = 0; i < count_zeros; i++) {
        if (s[i] == '1') {
            misplaced_ones++;
        }
    }
    cout << misplaced_ones << "
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