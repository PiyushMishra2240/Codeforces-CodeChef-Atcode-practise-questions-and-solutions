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
        ll l,r,a;
        cin>>l>>r>>a;
        ll ans=r/a + r%a;
        ll k=(r+1)/a;
        ll c=a*k;
        if(c>l)
        {
            c--;
            ans=max(ans,c/a+c%a);
        }
        cout<<setprecision(20)<<ans<<'\n';
    }
    
   return 0;
}