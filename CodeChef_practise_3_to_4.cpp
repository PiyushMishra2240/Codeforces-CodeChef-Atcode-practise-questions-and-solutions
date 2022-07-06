#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sum(ll n)
{
    while (n%2==0)
    {
        n/=2;
    }
    ll s=0;
    for (ll i = 1; i <= n; i+=2)
    {
        if(n%i==0)
        s+=i;
    }
    return s;
}

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
        ll l,r;
        cin>>l>>r;
        ll ans=0;
        for (ll i = l; i <= r; i++)
        {
            ans+=sum(i);
        }
        cout<<ans<<'\n';
    }
    return 0;
}