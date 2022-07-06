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
        unordered_map<ll,ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            m[arr[i]];
        }
        if(m.size() <= 2)
        cout<<"YES\n";
        else if(m.size() > 2)
        {
            ll count = 0;
            for (ll i = 0; i < n; i++)
            {
                if(arr[i] != arr[n-1-i])
                {
                    ++count;
                    if(count > 1)
                    break;
                }
            }
            if(count > 1)
            cout<<"NO\n";
            else 
            cout<<"YES\n";
        }
    }
    return 0;
}