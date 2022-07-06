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

    ll n,q;
    cin>>n>>q;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    while (q--)
    {
        ll x;
        cin>>x;
        ll ans=n;
        for (ll i = 0; i < n; i++)
        {
            if(arr[i] >= x)
            {
                ans = i;
                break;
            }
        }
        cout<<n-ans<<"\n";
    }
    return 0;
}