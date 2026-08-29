#include <iostream>
using namespace std;
 
void solve() {
    long long k, x;
    cin >> k >> x;
 
    long long initial_value = x * (1LL << k);
    
    cout << initial_value << "
";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}