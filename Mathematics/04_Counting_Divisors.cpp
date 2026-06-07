#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define pb push_back
#define eb emplace_back
#define mpp make_pair
#define fi first
#define se second

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

#define yes cout << "YES\n"
#define no cout << "NO\n"

const ll INF = (ll)1e18;
const int mod = 1000000007;

ll modularBinaryExponentiation(int base, int exponent)
{
    if (exponent == 0)
        return 1;
    ll result = modularBinaryExponentiation(base, exponent / 2);
    if (exponent % 2 == 1)
    {
        return (((result * result) % mod) * base) % mod;
    }
    return (result * result) % mod;
}
vector<ll> dp(1e6 + 2);
void test()
{
    dp[1]=1;
    for(int i=2;i<=1e6;i++){
        if(dp[i]==0){
            for(int j=i;j<=1e6;j+=i){
                dp[j]=i;
            }
        }
    }
}



void solve()
{
    ll n;cin>>n; 
    if(n==1){
        cout<<1<<"\n";
        return;
    }  
    map<int,int> mp;
    while(n>1){
        mp[dp[n]]++;
        n/=dp[n];
    } 
    ll ans=1;
    for(auto i:mp){
        ans = (ans*(i.second+1));
    }
    cout<<ans<<"\n";
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    test();
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
