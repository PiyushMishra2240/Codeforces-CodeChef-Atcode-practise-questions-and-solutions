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
        ll n,m,x,w;
        cin>>n>>m;
        map<ll,ll> m1;
        vector<ll> a;
        vector<pair<ll,ll>> pa;
        for (ll i = 0; i < m; i++)
        {
            cin>>x>>w;
            m1[x]=i+1;
            pa.push_back({w,x});
        }
        sort(pa.begin(),pa.end());
        ll ans=0;
        for (ll i = 0; i < 2*n; i++)
        {
            ans+=pa[i].first;
            a.push_back(pa[i].second);
        }
        sort(a.begin(),a.end());
        cout<<ans<<'\n';
        for (ll i = 0; i < n; i++)
        {
            cout<<m1[a[i]]<<" "<<m1[a[2*n-i-1]]<<'\n';
        }
    }
    return 0;
}