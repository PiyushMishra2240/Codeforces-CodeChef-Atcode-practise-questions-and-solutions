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
        ll n,k;
        cin>>n>>k;
        if(k <= n-1)
        {
            cout<<k<<'\n';
        }
        else if(k == n)
        {
            cout<<n+1<<'\n';
        }
        else
        {
            ll gap=k/(n-1);
            ll times=gap*n;
            ll rem=k%(n-1);
            ll ans=times+rem;
            if(rem == 0)
            ans--;
            cout<<ans<<'\n';
        }
    }
    return 0;
}