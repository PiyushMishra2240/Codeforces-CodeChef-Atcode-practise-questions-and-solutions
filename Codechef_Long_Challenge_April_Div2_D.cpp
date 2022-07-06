#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll n, ll times)
{
    ll ans=1;
    for (ll i = 0; i < times; i++)
    {
        ans*=n;
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
        ll x;
        cin>>x;
        if(x%2==1)
        cout<<"-1\n";
        else
        {
            ll st=__builtin_popcount(x);
            ll pos;
            if(st>1)
            pos=__builtin_ctz(x);
            if(st>1)
            {
                cout<<x/2<<" "<<power(2,pos)<<" "<<"0\n";
            }
            else cout<<"-1\n";
        }
    }
    return 0;
}