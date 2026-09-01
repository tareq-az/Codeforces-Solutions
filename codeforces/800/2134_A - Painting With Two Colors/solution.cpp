#include <iostream>
 
using namespace std;
 
void solve() {
    long long n, a, b;
    cin >> n >> a >> b;
 
    if ((n - b) % 2 == 0) {
        if (a <= b || (n - a) % 2 == 0 || (a - b) % 2 == 0) {
            cout << "YES
";
            return;
        }
    }
 
    cout << "NO
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