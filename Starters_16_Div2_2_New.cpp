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

    ll n = 10000000 + 1;
    ll arr[n];
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    for (ll i = 4; i < n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    ll t;
    cin>>t;
    while (t--)
    {
        ll x,y;
        cin>>x>>y;
        cout<<arr[y] - arr[x]<<'\n';
    }
    return 0;
}