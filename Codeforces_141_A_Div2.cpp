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

    unordered_map<ll,ll> m;
    ll arr[4];
    for (ll i = 0; i < 4; i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    ll op=0;
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        if(itr->second >= 1)
        {
            ++op;
        }
    }
    ll ans = 4ll-op;
    cout<<ans;
    return 0;   
}