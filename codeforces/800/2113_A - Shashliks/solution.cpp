#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        long long k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;
 
        if (a > k && b > k) {
            cout << 0 << "
";
            continue;
        }
 
        long long costx = 0;
        long long costy = 0;
 
        
        if (x <= y) {
            if (k >= a) {
                costx = (k - a) / x + 1; 
                k -= costx * x;
            }
            if (k >= b) {
                costy = (k - b) / y + 1;
                k -= costy * y;
            }
        } 
        else {
            if (k >= b) {
                costy = (k - b) / y + 1;
                k -= costy * y;
            }
            if (k >= a) {
                costx = (k - a) / x + 1;
                k -= costx * x;
            }
        }
 
        cout << costx + costy << "
";
    }
    return 0;
}