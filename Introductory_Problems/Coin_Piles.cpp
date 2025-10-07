#include <bits/stdc++.h>
using namespace std;
 
// Define macros for common operations
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
 
#define MOD 1000000007
// Read the question properly
// Be focussed 
// Function to solve a particular problem
void solve() {
    ll a,b;
    cin>>a>>b;
    if((a+b)%3!=0){
        cout<<"NO\n";
        return;
    }
    else{
        ll z=(a+b)/3;
        if(min(a,b)>=z){
            cout<<"YES\n";
            return;
        }
        else{
            cout<<"NO\n";
            return;
        }
    }
}
 
int main() {
    ios::sync_with_stdio(0); // Disable synchronization with C I/O for faster I/O
    cin.tie(0);              // Untie cin from cout
    
    int t; 
    cin >> t; 
    
    while (t--) {
        solve(); 
    }
    
    return 0; 
}
