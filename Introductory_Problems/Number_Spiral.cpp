#include <bits/stdc++.h>
using namespace std;
 

typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
 
#define MOD 1000000007

void solve() {
    ll x,y;
    cin>>x>>y;
    if(x==y){
        cout<<x*x-x+1<<"\n";
        return;
    }
    if(x>y){
        ll ans=x*x-x+1;
        if(x%2==0){
            
            ans+=x-y;
            cout<<ans<<"\n";
            return;
        }
        else{
            ans-=x-y;
            cout<<ans<<"\n";
            return;
        }
    }
    else{
        ll ans=y*y-y+1;
        if(y%2==0){
            ans-=y-x;
            cout<<ans<<"\n";
            return;
        }
        else{
            ans+=y-x;
            cout<<ans<<"\n";
            return;
        }
    }
}
 
int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);            
    
    int t; 
    cin >> t; 
    
    while (t--) {
        solve(); 
    }
    
    return 0; 
}
