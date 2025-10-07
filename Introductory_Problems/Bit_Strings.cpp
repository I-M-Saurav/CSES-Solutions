#include <bits/stdc++.h>
using namespace std;
 

typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
ll mod=1000000007;

void solve() {
    
}
 
int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);             
    
    ll n;
    cin>>n;
    ll ans=1;
    for(ll i=0;i<n;i++){
        ans*=2;
        ans%=mod;
    }
    cout<<ans<<"\n";
    
    return 0; 
}
