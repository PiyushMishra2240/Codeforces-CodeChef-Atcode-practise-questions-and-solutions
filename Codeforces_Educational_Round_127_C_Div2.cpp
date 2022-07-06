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
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll ans=0;
        vector<ll> prefix(n);
        prefix[0]=a[0];
        for (ll i = 1; i < n; i++)
        {
            prefix[i]=prefix[i-1]+a[i];
        }
        // for (ll i = 0; i < n; i++)
        // {
        //     cout<<prefix[i]<<" ";
        // }
        // cout<<'\n';
        for (ll i = 0; i < n; i++)
        {
            if(prefix[i]<=x)
            {
                ans++;
                ans+=(x-prefix[i]) / (i+1);
            }
            else 
            break;
        }
        cout<<ans<<'\n';
    }
    return 0;
}