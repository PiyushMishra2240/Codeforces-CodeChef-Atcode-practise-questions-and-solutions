#include<bits/stdc++.h>
using namespace  std;
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

    ll n;
    cin>>n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll steps=INT_MAX;
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            ans.push_back(0);
            continue;
        }
        steps=15;
        ll p=ceil(log2(a[i]));
        ll n2p=power(2,p);
        ll cnt=1;
        ll k=0;
        if(__builtin_ctz(a[i])!=0)
        k=__builtin_ctz(a[i])+1;
        steps=min(steps,16-k);
        while (a[i]+cnt <= n2p)
        {
            ll st=0;
            if(__builtin_ctz(a[i]+cnt) != 0)
            st+=__builtin_ctz(a[i]+cnt)+1;
            ll t=min(16-st + cnt,(32768-(a[i])));
            steps=min(steps,t);
            cnt++;
        }
        ans.push_back(steps);
    }
    for (ll i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<'\n';
}