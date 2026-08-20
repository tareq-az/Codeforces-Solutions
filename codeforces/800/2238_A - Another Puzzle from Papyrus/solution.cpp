#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
 
        bool flag = true;
        long long suma = 0, sumb = 0;
        for(int i = 0; i < n; i++){
            if(a[i] >= b[i]){
                suma += a[i];
                sumb += b[i];
            } else {
                flag = false;
                break; 
            }
        }
 
        if(flag){
            cout << suma - sumb << "
";
            continue;
        }
 
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
 
        suma = 0;
        sumb = 0;
        bool flag2 = true;
 
        for(int i = 0; i < n; i++){
            if(a[i] >= b[i]){
                suma += a[i];
                sumb += b[i];
            } else {
                flag2 = false;
                break; 
            }
        }
 
        if(flag2){
            cout << c + suma - sumb << "
";
        } else {
            cout << "-1
";
        }
    }
    return 0;
}