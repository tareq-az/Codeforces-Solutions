#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
        map<long long, int> mp;
 
        int mx_freq = 0;
        int odd_cnt = 0;
        int ev_g0 = 0;
        int ev_g1 = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
 
            mp[a[i]]++;
            mx_freq = max(mx_freq, mp[a[i]]);
 
            if (a[i] % 2 != 0) {
                odd_cnt++;
            } else {
                long long st = a[i] / 2;
                if (st % 2 == 0) {
                    ev_g0++;
                } else {
                    ev_g1++;
                }
            }
        }
 
        int ans = max({mx_freq, odd_cnt, ev_g0, ev_g1});
        cout << ans << "
";
    }
 
    return 0;
}