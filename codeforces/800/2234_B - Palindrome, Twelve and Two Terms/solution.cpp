#include <bits/stdc++.h>
using namespace std;
 
bool isPalindrome(long long x) {
    string s = to_string(x);
 
    int left = 0;
    int right = s.size() - 1;
 
    while (left < right) {
        if (s[left] != s[right])
            return false;
 
        left++;
        right--;
    }
 
    return true;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        bool found = false;
        for (long long a = 0; a <= 22; a++) {
 
            if (isPalindrome(a) && a <= n) {
                long long b = n - a;
 
                if (b % 12 == 0) {
                    cout << a << " " << b << '
';
                    found = true;
                    break;
                }
            }
        }
 
        if (!found)
            cout << -1 << '
';
    }
 
    return 0;
}