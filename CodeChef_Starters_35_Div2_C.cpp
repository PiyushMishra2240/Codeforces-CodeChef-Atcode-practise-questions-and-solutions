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
        cin>>n;
        vector<ll> a(n);
        map<ll,ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        cin>>x;
        for (ll i = 0; i < n; i++)
        {
            a[i]&=x;
        }
        for (ll i = 0; i < n; i++)
        {
            m[a[i]]++;
        }
        ll ans=0;
        for (auto itr = m.begin(); itr != m.end(); itr++)
        {
            ans+=itr->second*(itr->second);
        }
        cout<<ans<<'\n';
    }
    return 0;      
}