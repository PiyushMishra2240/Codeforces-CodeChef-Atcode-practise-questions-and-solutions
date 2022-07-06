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
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        map<ll,ll,greater<ll>> m;
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        sort(arr,arr+n);
        auto itr = m.begin();
        ll ans=0,i=n-1;
        if(itr -> second >= k)
        {
            while (k--)
            {
                ans += floor(1.0*arr[i]/arr[i-1]);
                i-=2;
            }
            for (ll j = 0; j <= i; j++)
            {
                ans += arr[j];
            }
            cout<<ans<<'\n';
        }
        else 
        {
            ll j = 0;
            while (k--)
            {
                for (j = 0; j < n/2; j++)
                {
                    ans += floor(1.0*arr[j]/arr[n-1-j]);
                }
            }
            for (ll k = j; k <= n/2; k++)
            {
                ans += arr[k];
            }
            cout<<ans<<'\n';   
        }
    }
        return 0;
}