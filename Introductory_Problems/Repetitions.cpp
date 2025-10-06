#include <bits/stdc++.h>
 
using namespace std;
 
 
void solve()
{
 
   string s;
   cin>>s;
   int count =0,ans=0;
   for(int i=0;i<s.length()-1;i++){
    if(s[i]==s[i+1]){
        count++;
        ans=max(ans,count);
    }
    else{
        count=0;
    }
   }
   
   cout<<ans+1<<"\n";
}
int main()
{
 
    solve();
}
