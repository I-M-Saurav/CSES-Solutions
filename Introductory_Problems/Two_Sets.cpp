#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
 

void solve() {
    
}
 
int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);            
    
    ll n;
    cin>>n;
    ll ans=n*(n+1);
    ans/=2;
    if(ans%2!=0){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        if(n%2==0){
            cout<<n/2<<"\n";
            ll a=1;
            while(a<n/2){
                cout<<a<<" ";
                a+=2;
            }
            ll b1=n;
            while(b1>n/2){
                cout<<b1<<" ";
                b1-=2;
            }
            cout<<"\n";
            cout<<n/2<<"\n";
            a=2;
            while(a<=n/2){
                cout<<a<<" ";
                a+=2;
            }
            a=n-1;
            while(a>=n/2){
                cout<<a<<" ";
                a-=2;
            }
            cout<<"\n";
        }
        else{
            cout<<(n+1)/2<<"\n";
            cout<<1<<" "<<2<<" ";
            ll a=4;
            while(a<(4+n)/2){
                cout<<a<<" ";
                a+=2;
            }
            a=n;
            while(a>(4+n)/2){
                cout<<a<<" ";
                a-=2;
            }
            cout<<"\n";
            cout<<n/2<<"\n";
            a=5;
            cout<<3<<" ";
            while(a<=(4+n)/2){
                cout<<a<<" ";
                a+=2;
            }
            a=n-1;
            while(a>(4+n)/2){
                cout<<a<<" ";
                a-=2;
            }
            cout<<"\n";
        }
    }
    
    return 0; 
}
