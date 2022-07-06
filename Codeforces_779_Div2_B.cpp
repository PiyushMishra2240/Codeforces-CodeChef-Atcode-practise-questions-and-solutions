#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=998244353;

ll fact(ll n)
{
    ll ans=1;
    for (ll i = 1; i<=n; i++)
    {
        ans=((ans%mod)*(i%mod))%mod;
    }
    return ans;
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
        ll n;
        cin>>n;
        if(n%2 == 1)
        {
            cout<<"0\n";
        }
        else
        {
            ll ans=fact(n/2);
            cout<<((ans%mod)*(ans%mod)%mod)<<'\n';
        }
    }
    return 0;
}