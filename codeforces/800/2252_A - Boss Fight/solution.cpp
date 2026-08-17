#include <iostream>
#include <vector>
#include <map>
#include <numeric>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    map<long long, int> freq;
    long long total_sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
        freq[a[i]]++;
    }
    
    long long max_freq = 0;
    long long max_val = 0;
    
    for (auto const& [val, count] : freq) {
        if (count > max_freq) {
            max_freq = count;
            max_val = val;
        }
    }
    
    long long other_cards = n - max_freq;
    
   
    if (max_freq <= other_cards + 1) {
        cout << total_sum << "
";
    } else {
        
        long long non_max_sum = total_sum - (max_freq * max_val);
       
        long long max_val_damage = (other_cards + 2) * max_val;
        
        cout << non_max_sum + max_val_damage << "
";
    }
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