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

    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    map<ll,ll> ma,mb;
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
        ma.insert({a[i],i});
    }
    for (ll i = 0; i < n; i++)
    {
        cin>>b[i];
        mb.insert({b[i],i});
    }
    map<ll,ll> p;
    for (auto itr = ma.begin(); itr != ma.end(); itr++)
    {
        auto x=mb.find(itr->first);
        if(x->second < itr->second)p[n-itr->second+x->second]++;
        else p[x->second-itr->second]++;
    }
    ll ans=0;
    for (auto itr = p.begin(); itr != p.end(); itr++)
    {
        ans=max(itr->second,ans);
    }
    cout<<ans<<'\n';
    return 0;
}