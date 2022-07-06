#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll n,x,y;
        cin>>n>>x>>y;
        ll ans=0;
        while (n>0)
        {
           if(n>=100)
           {
               ans+=min(x,25*y);
               n-=100;
           }
           else
           {
               ll car=ceil(1.0*n/4);
               ans+=min(car*y,x);
               n=0;
           }
        }
        cout<<ans<<'\n';
    }
    
}