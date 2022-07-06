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
        ll m = 0,mn = 1e8;
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i] > m)
            m = arr[i];
            if(arr[i] < mn)
            mn = arr[i];
        }
        cout<<m - mn<<'\n';
    }
    
    return 0;
}