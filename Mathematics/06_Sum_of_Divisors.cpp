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
// The first approach is brute force where we can iterate from 1 to n and for each i we can find divisors in sqrt(i) and then sum it.
// Time complexiety will be O(n*root(n)), since n<=1e12, this will not pass
// next we can see that from 1 to n how many times i will come, it will be equal to (n/i) times and then it's contrubution to the 
// sum will be (n/i)*i , So, the answer will be summation i = 1  to n (n/i)*i;
// Time compllexiety will be O(n), better but it will not pass again as n<=1e12;
// now we can observe that n/i can have only 2*root(n) distinct values ---> break the segmant in two part [1, root(n)] --> this can have at most root(n) and then 
// other segment [root(n)+1, n] this can have root(n) as val of n/i for this will be <=root(n)
// now we will iterate the starting values of all the segment and then find the sum of segment and multiply it with q to have it's contribution.

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 1, j; i <= n; i = j)
    {
        ll q = n / i; // this is the n/i value stored in q
        j = n / q + 1; // this is next value of i, starting point of next segment
        ll rangeSumUptoJminus1 = ((((j % mod) * ((j - 1) % mod)) % mod) * modularBinaryExponentiation(2, mod - 2)) % mod;
        ll rangeSumUptoIminus1 = ((((i % mod) * ((i - 1) % mod)) % mod) * modularBinaryExponentiation(2, mod - 2)) % mod;
        ll rangeWithQ = (rangeSumUptoJminus1 - rangeSumUptoIminus1 + mod) % mod;// sum of the current segment from i to j-1.
        ans = (ans + (q % mod) * rangeWithQ) % mod;// multiply the sum with q to get the contribution of this segment and then add it to answer.
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
