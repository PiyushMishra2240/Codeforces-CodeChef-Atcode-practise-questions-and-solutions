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
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        ll ans=1;
        for (ll i = 0; i < n-1; i++)
        {
            if(arr[i]*arr[i+1] > ans)
            ans = arr[i]*arr[i+1];
        }
        cout<<ans<<'\n';
    }
    return 0;
}