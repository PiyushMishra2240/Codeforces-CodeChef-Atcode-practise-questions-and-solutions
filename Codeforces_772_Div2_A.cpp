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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (ll i = 0; i < n-1; i++)
        {
            ll temp=a[i] | a[i+1];
            a[i]=0;
            a[i+1]=temp;
        }
        ll ans=0;
        for (ll i = 0; i < n; i++)
        {
            ans+=a[i];
        }
        cout<<ans<<'\n';
    }
    return 0;
}