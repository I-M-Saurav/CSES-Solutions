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

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 1, j; i <= n; i = j)
    {
        ll q = n / i;
        j = n / q + 1;
        ll rangeSumUptoJminus1 = ((((j % mod) * ((j - 1) % mod)) % mod) * modularBinaryExponentiation(2, mod - 2)) % mod;
        ll rangeSumUptoIminus1 = ((((i % mod) * ((i - 1) % mod)) % mod) * modularBinaryExponentiation(2, mod - 2)) % mod;
        ll rangeWithQ = (rangeSumUptoJminus1 - rangeSumUptoIminus1 + mod) % mod;
        ans = (ans + (q % mod) * rangeWithQ) % mod;
    }
    cout << ans << "\n";
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
