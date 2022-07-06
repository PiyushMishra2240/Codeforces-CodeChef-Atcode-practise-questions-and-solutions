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
    ll ca=1;
    while (t--)
    {
        cout<<"Case #"<<ca<<": ";
        ca++;
        ll n;
        cin>>n;
        ll a[n][n];
        ll trace=0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin>>a[i][j];
                if(i==j)
                trace+=a[i][j];
            }
        }
        ll r=0,c=0;
        for (ll i = 0; i < n; i++)
        {
            map<ll,ll> m;
            for (ll j = 0; j < n; j++)
            {
                m[a[i][j]]++;
            }
            for (auto itr = m.begin(); itr != m.end(); itr++)
            {
                if(itr->second>1)
                {
                    r++;
                    break;
                }
            }
        }
        for (ll i = 0; i < n; i++)
        {
            map<ll,ll> m;
            for (ll j = 0; j < n; j++)
            {
                m[a[j][i]]++;
            }
            for (auto itr = m.begin(); itr != m.end(); itr++)
            {
                if(itr->second>1)
                {
                    c++;
                    break;
                }
            }
        }
        cout<<trace<<" "<<r<<" "<<c<<'\n';
    }
    return 0;
}