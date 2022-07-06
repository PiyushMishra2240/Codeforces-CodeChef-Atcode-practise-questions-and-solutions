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
        ll n;
        cin>>n;
        map<ll,ll> m;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin>>temp;
            m[temp]++;
        }
        ll ans=0;
        for (auto itr = m.begin(); itr != m.end(); itr++)
        {
            if(itr->first != 0)
            {
                if(itr->second >= 2)
                {
                    if(m.find(-1*itr->first) != m.end())
                    ans++;
                    else
                    ans += 2;
                }
                else
                ans += itr->second;
            }
            else
            ans++;
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}