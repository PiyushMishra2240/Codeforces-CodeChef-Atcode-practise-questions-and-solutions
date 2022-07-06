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
    ll arr1[n],arr2[n];
    for (ll i = 0; i < n; i++)
    {
        arr1[i] = i+1;
    }
    for (ll i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }
    ll ans = 0;
    sort(arr2,arr2+n);
    for (ll i = 0; i < n; i++)
    {
        ans += abs(arr1[i] - arr2[i]);
    }
    cout<<ans;
    return 0;
}