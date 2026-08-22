#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, x, y, z;
        cin >> n >> x >> y >> z;
 
        int ans1 = ceil((double)n / (x + y));
        int ans2;
 
        if (x * z >= n) {
           
            ans2 = ceil((double)n / x);
        }
        else {
            int remaining = n - x * z;
 
            ans2 = z + ceil((double)remaining / (x + 10 * y));
        }
 
        cout << min(ans1, ans2) << endl;
    }
}