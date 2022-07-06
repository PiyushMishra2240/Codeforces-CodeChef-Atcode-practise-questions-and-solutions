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

    int t;
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
        sort(arr,arr+n);
        ll ans = arr[0];
        for (ll i = 0; i < n-1; i++)
        {
            ans = max(ans , arr[i+1] - arr[i]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}