#include<bits/stdc++.h>
using namespace  std;
typedef long long ll;

ll fact(ll n)
{
    ll ans=1;
    for (ll i = 1; i <= n; i++)
    {
        ans*=i;
    }
    return ans;
}

ll setbits(ll n)
{
    ll ans=0;
    while (n)
    {
        if(n%2)
        ans++;
        n/=2;
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
    vector<ll> fac(14);
    ll j=0;
    for (ll i = 1; i <= 14; i++)
    {
        fac[j]=fact(i);
        j++;
    }
    // for (ll i = 0; i < fac.size(); i++)
    // {
    //     cout<<fac[i]<<" ";
    // }
    
    while (t--)
    {
        ll n;
        cin>>n;
        ll cnt=INT_MAX;
        if(ceil(log2(n)) == floor(log2(n)))
        {
            cout<<"1\n";
            continue;
        }
        for (ll i = 0; i < (1<<14); i++)
        {
            ll sum=0;
            for (ll k = 0; k < 14; k++)
            {
                if(i & (1<<k))
                sum+=fac[k];
            }
            if(sum>n)
            break;
            ll temp=setbits(i);
            temp+=setbits(n-sum);
            cnt=min(cnt,temp);
        }
        cout<<cnt<<'\n';
    }
    return 0;
}