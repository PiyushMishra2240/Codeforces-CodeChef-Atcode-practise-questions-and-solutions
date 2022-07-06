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
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        if(n == 2 || n == 1)
        {
            cout<<"0\n";
        }
        else
        {
            map<ll,ll> m;
            for (ll i = 0; i < n; i++)
            {
                m[arr[i]]++;
            }
                ll x = 0;
            for (auto itr : m)
            {
               if(itr.second > x)
               x = itr.second;
            }
            if(x != 1)
                cout<<n - x<<'\n';
            else
                cout<<n - 2<<'\n';
        }
    }
    return 0;
}