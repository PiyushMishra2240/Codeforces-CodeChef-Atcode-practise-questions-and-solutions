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

    ll n,k;
    cin>>n>>k;
    map<char,ll> m;
    for (ll i = 0; i < n; i++)
    {
        char c;
        cin>>c;
        m[c]++;
    }
    vector<ll> v;
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        ll t = itr->second;
        v.push_back(t);
    }
    sort(v.begin(),v.end(),greater<ll>());
   
    ll ans = 0,f=0;
    for (ll i = 0; i < v.size(); i++)
    {
        if(v[i] >= k)
        {
            ans += k*k;
            cout<<ans;
            f=1;
            break;
        }
        else
        {
            ans += v[i]*v[i];
            k = k - v[i];
        }
    }
    if(f==0)
    cout<<ans;
    return 0;
}