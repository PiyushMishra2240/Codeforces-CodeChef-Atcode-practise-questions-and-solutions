#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        map<ll,ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        vector<ll> v,diff;
        for (auto itr = m.begin(); itr != m.end(); itr++)
        {
            v.push_back(itr->first);
        }
        for (ll i = 0; i < v.size()-1; i++)
        {
            diff.push_back(v[i+1]-v[i]);
        }
        ll ans=0;
        for (ll i = 0; i < diff.size(); i++)
        {
            ans = __gcd(diff[i],ans);
        }
        if(ans == 0)
        cout<<"-1\n";
        else
        cout<<ans<<'\n';
    }
    return 0;
}