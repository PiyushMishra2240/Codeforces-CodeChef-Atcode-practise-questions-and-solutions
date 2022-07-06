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
        ll mx = INT_MIN,ans=0,mc = INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i] > mx)
            mx = arr[i];
        }
        for (ll i = n-1; i >= 0; i--)
        {
            if(arr[i] == mx)
            break;
            if(arr[i] <= mc)
            continue;
            else
            {
                ans++;
                mc = arr[i];
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}