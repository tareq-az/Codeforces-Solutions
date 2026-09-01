#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        bool subtract1 = false, subtract2 = false;
        for (int i = 1; i < n - 1; i++) {
            if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
                if (s[i - 1] == s[i + 1]) {
                    subtract2 = true;
                } else {
                    subtract1 = true;
                }
            }
        }
        int ans = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                ++ans;
            }
        }
        int x;
        if (subtract2) {
            x = 2;
        } else if (subtract1) {
            x = 1;
        } else {
            x = 0;
        }
        ans = ans - x;
 
        cout << ans << "
";
    }
 
    return 0;
}