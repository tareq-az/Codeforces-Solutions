#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n, m;
        cin >> n >> m;
 
        vector<string> s(n);
        set<char> c;
        vector<string> s2(m);
        for(int i = 0; i < n; i++){
            cin >> s[i];
 
            c.insert(s[i][0] - 'a' + 'A');
        }
        for(int i = 0; i < m; i++){
            cin >> s2[i];
        }
 
        bool flag = true;
        for(int i = 0; i < m; i++){
 
            for(int j = 0; j < s2[i].size(); j++){
 
                if(c.find(s2[i][j]) == c.end()){
                    flag = false;
                    break;
                }
            }
 
            if(!flag)
                break;
        }
 
        if(flag)
            cout << "YES
";
        else
            cout << "NO
";
    }
}