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
    dp[1] = 1;
    dp[0] = 1;
    for (int i = 2; i <= 1e6; i++)
    {
        dp[i] = (dp[i - 1] * i) % mod;
    }
}


// This is actually the problem of derangement, we can model this problem as a permutation
// where ai=i, and we need to arange this in such a way that for every i, ai!=i, which is derangement
// we can use the recursive relation to fnid this.
void solve()
{
    ll n;cin>>n;
    if(n==1 || n==2){
        cout<<n-1<<"\n";
        return;
    }
    ll ans = 1,last=0;
    for(ll i=3;i<=n;i++){
        ll x=((i-1)*(ans+last))%mod;
        last=ans;ans=x;
    }
    cout<<ans<<"\n";
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // test();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
