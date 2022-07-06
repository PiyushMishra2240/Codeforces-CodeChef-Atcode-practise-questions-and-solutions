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
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        v.push_back(arr[i]);
        reverse(v.begin(),v.end());
    }
    for (ll i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}