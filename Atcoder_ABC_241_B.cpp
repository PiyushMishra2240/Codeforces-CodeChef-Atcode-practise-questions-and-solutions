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

    ll n,m;
    cin>>n>>m;
    vector<ll> b(m);
    map<ll,ll> ma;
    for (ll i = 0; i < n; i++)
    {
        ll t;
        cin>>t;
        ma[t]++;
    }
    for (ll i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    ll f=0;
    for (ll i = 0; i < m; i++)
    {
        auto itr=ma.find(b[i]);
        if(itr!=ma.end() && itr->second>0)
        {
            itr->second--;
        }
        else
        {
            f=1;
            break;
        }
    }
    if(f==0)
    cout<<"Yes\n";
    else
    cout<<"No\n";
    return 0;
}