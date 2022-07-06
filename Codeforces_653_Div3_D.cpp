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
        map<ll,ll> m;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin>>temp;
            temp %= k;
            if(temp != 0)
                m[temp]++;
        }
        ll ans=0,num=0;
        for (auto itr = m.begin(); itr != m.end(); itr++)
        {
            num = ((itr->second)*k)-(itr->first);
            if(num>ans)
            ans=num;
        }
        if(ans>0)
        ans++;
        cout<<ans<<"\n";
    }
    
    return 0;
}