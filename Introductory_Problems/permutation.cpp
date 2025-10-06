#include <bits/stdc++.h>
using namespace std;
 

typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
ll mod=1000000007;


 
int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);             
    
    ll n;
    cin>>n;
    if(n==2 || n==3){
        cout<<"NO SOLUTION\n";
        return 0;
    }
    ll i=1,j=2;
    while(j<=n){
        cout<<j<<" ";
        j+=2;
    }
    while(i<=n){
        cout<<i<<" ";
        i+=2;
    }
    
    cout<<"\n";
 
 
 
 
    
    return 0; 
}
