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

    ll tt;
    cin>>tt;
    while (tt--)
    {
        ll n,x,t;
        cin>>n>>x>>t;
        ll arr[n];
        ll arr1[n];
        arr[0] = t;
        ll j=1;
        arr1[0] = 0;
        for (ll i = 1; i < n; i++)
        {
            arr1[i] = arr1[i-1] + x;
        }
        // for (ll i = 0; i < n; i++)
        // {
        //     cout<<arr1[i]<<" ";
        // }
        // cout<<'\n';
        for (ll i = 1; i < n; i++)
        {
            arr[i] = j*x + t;
            j++;
        }
        // for (ll i = 0; i < n; i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        
    }
    return 0;
}