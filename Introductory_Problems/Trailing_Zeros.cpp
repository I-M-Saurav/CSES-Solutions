#include <bits/stdc++.h>
using namespace std;
 

typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
 
#define MOD 1000000007

void solve() {
    
}
 
int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);         
    
    ll n;
    cin>>n;
    ll ct=0;
    ll a=5;
    while(n/a>0){
        ct+=n/a;
        a*=5;
    }
    cout<<ct<<"\n";
    
    return 0; 
}
