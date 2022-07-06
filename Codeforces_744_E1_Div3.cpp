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
        deque<ll> d;
        ll arr[n];
        ll mi=INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]<mi)
            mi = arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            if(arr[i] <= d.front())
            d.push_front(arr[i]);
            else
            d.push_back(arr[i]);
        }
        for (ll i = 0; i < n; i++)
        {
            cout<<d[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}