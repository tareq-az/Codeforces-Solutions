#include <iostream>
 
using namespace std;
 
void solve() {
    long long k, x;
    cin >> k >> x;
    
    long long ans = k * x + 1;
    
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}