#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int  main()
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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        bool ok=false;
        sort(v.begin(),v.end());
        for (ll i = 0; i < n; i++)
        {
            ll tt=v[i]+k;
            auto itr=lower_bound(v.begin(),v.end(),tt);
            if(itr!=v.end() && *itr == tt )
            {
                ok=true;
                break;
            }
        }
        cout<<(ok?"YES\n":"NO\n");
    }
    return 0;
}