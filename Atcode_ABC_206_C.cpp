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

    ll n;
    cin>>n;
    ll arr[n];
    unordered_map<ll,ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    ll count=0;
    for (ll i = 0; i < n; i++)
    {
        count += (n-i-1);
        auto itr = m.find(arr[i]);
        if(itr != m.end())
        {
            count = count-(itr->second -1);
            itr->second--;
        }
    }
    cout<<count;
    return 0;
}