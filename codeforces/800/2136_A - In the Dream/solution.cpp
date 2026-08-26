#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
 
        bool first_half = false;
        bool second_half = false;
 
        // First half
        if(a < b){
            if(b <= a * 2 + 2){
                first_half = true;
            }
        }
        else if(a > b){
            if(a <= b * 2 + 2){
                first_half = true;
            }
        }
        else{
            first_half = true;
        }
 
        // Second half
        int x = c - a;
        int y = d - b;
 
        if(x < y){
            if(y <= x * 2 + 2){
                second_half = true;
            }
        }
        else if(x > y){
            if(x <= y * 2 + 2){
                second_half = true;
            }
        }
        else{
            second_half = true;
        }
 
        if(first_half && second_half){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
 
    return 0;
}