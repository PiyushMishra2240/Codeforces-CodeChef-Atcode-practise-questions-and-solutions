#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

unordered_map<ll,ll> v;
unordered_map<ll,ll> m;

bool prime(ll n)
{
    auto itr = v.find(n);
    if(itr != v.end())
    return true;

    for (ll i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0)
        return false;
    }
    v[n]++;
    return true;
}

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
        ll x,y,l=0;
        ll ans = 0;
        cin>>x>>y;
        auto u = m.find(y-x);
        if(u != m.end())
        {
            cout<<u->second<<'\n';
            continue;
        }
        
        while(x < y)
        {
            if(prime(x+2) && (x+2) <= y)
            {
                if(x + 2 <= y)
                {
                    ++ans;
                    x = x+2;
                }
            }
            else
            {
                ++ans;
                x = x + 1;
            }
        }
        if(l==0)
        cout<<ans<<'\n';
        auto k = m.insert({y-x,ans});
    }
    return 0;
}