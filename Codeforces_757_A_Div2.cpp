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
        ll n,l,r,k;
        cin>>n>>l>>r>>k;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if(arr[i] >= l && arr[i] <= r && (k-arr[i])>=0)
            {
                ++ans;
                k -= arr[i];
            }
            else if(k - arr[i] < 0)
            break;
        }
        cout<<ans<<'\n';
      }
    return 0;
}