#include <bits/stdc++.h>
 
using namespace std;
 
 
void solve()
{
 
   long long n;
   cin>>n;
   cout<<n<<" ";
   while(n>1){
    
    if(n%2==0){
        n/=2;
        cout<<n<<" ";
    }
    else{
        n=n*3+1;
        cout<<n<<" ";
    }
   }
   cout<<endl;
}
int main()
{
 
    solve();
}
