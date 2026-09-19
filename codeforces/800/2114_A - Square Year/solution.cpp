#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        int n = stoi(s);
 
        int root = sqrt(n);
 
        if (root * root == n) {
            cout << 0 << " " << root << '
';
        } else {
            cout << -1 << '
';
        }
    }
 
    return 0;
}