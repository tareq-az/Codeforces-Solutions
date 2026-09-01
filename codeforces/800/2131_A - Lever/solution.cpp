#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
 
    long long iterations = 0;
 
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            iterations += (a[i] - b[i]);
        }
    }
 
    cout << iterations + 1 << "
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