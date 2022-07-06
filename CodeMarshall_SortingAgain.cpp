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
        unordered_map<ll,ll> m;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin>>temp;
            m[temp]++;
        }
        ll f=0;
        for (auto itr = m.begin(); itr != m.end(); itr++)
        {
            if(itr->second>1)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}