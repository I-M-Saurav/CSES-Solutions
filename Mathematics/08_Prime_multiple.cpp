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

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(k);
    for (ll i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    ll totalCombination = (1 << k);
    for (ll i = 1; i < totalCombination; i++)
    {
        ll count = 0;
        ll lcm = 1;
        for (ll j = 0; j < k; j++)
        {
            if ((1 << j) & i)
            {
                if (lcm > n / a[j])
                {
                    lcm = n + 1;
                    break;
                }
                lcm *= a[j];
                count++;
            }
        }
        if (count & 1)
        {
            ans += n / lcm;
        }
        else
        {
            ans -= n / lcm;
        }
    }
    cout<<ans<<"\n";
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
