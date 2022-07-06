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
        ll n,q=0;
        cin>>n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            while(arr[i]%2 == 0)
            {
                q++;
                arr[i] /= 2;
            }
        }
        sort(arr,arr+n);
        ll ans=0;
        for (ll i = 0; i < q; i++)
        {
            arr[n-1] *= 2;
        }
        
        for (ll i = 0; i < n; i++)
        {
            ans += arr[i];
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}