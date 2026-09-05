#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    long long current_sum = 0;
    long long max_h = a[0];
 
    for (int i = 0; i < n; i++) {
        current_sum += a[i];
        long long possible_avg = current_sum / (i + 1);
        max_h = min(max_h, possible_avg);
        
        cout << max_h << (i == n - 1 ? "" : " ");
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