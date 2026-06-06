#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

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



void solve() {
    int n;cin>>n;
    set<ll> s;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;s.insert(x);
    }
    cout<<s.size()<<"\n";
    return;
    // There are many approach to solve this problem, we will see al the approach
    // 1. first appraoch is to use set, either ordered or unordered then inserting all
    // the element in the set and then return the size of set.
    // 2. Second approach is to use map and then store key , value pair and then return the 
    // size of the map
    // 3. Third approach is to use sorting and then use unique function to erase the duplicates and then return the size of the vector
    // 4. Fourth approach is to use sorting and then iterating with ct=1 and then increas the ct whenever Ai != A(i+1).
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}
