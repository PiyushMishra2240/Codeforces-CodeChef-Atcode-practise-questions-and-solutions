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
        ll z=0;
        for (ll i = 0; i < n; i++)
        {
            ll xx;
            cin>>xx;
            if(xx == 0)
            z++;
            m[xx]++;
        }
        if(z)
        {
            cout<<n-z<<'\n';
            continue;
        }
        ll rep=0;
        for(auto itr=m.begin();itr!=m.end();itr++)
        {
            if(itr->second>1)
            {
                rep=1;
                break;
            }
        }
        if(rep)
        {
            cout<<n<<'\n';
        }
        else cout<<n+1<<'\n';
    }
    return 0;
}