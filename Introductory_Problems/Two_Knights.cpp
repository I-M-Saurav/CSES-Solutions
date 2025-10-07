#include <bits/stdc++.h>
using namespace std;
 
// Define macros for common operations
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
 
// Read the question properly
// Be focussed 
// Function to solve a particular problem
void solve() {
    
}
 
int main() {
    ios::sync_with_stdio(0); // Disable synchronization with C I/O for faster I/O
    cin.tie(0);              // Untie cin from cout
    
   ll n;
   cin>>n;
   ll i=1;while(i<=n){
    if(i==1){
        cout<<0<<"\n";
 
    }
    else{
        ll ans=i*i;
        ans*=(ans-1);
        ans/=2;
        ans-=((i-1)*(i-2)*4);
        cout<<ans<<"\n";
    }
    i++;
   }
    
    return 0; 
}
