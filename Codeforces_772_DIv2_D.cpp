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

    ll n,p;
    cin>>n>>p;
    vector<ll> a(n);
    map<ll,ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    ll mi=INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        if(a[i]<mi)
        mi=a[i];
    }
    vector<ll> dp(p);
    dp[0]=1;
    dp[1]=3;
    for (ll i = 2; i < p; i++)
    {
        dp[i]=dp[i-2]+dp[i-1];
    }
    for (ll i = 0; i < p; i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<'\n';
    vector<ll> sig;
    for (ll i = 0; i < n; i++)
    {
        ll f=0;
        ll t=a[i];
        while(t%4 == 0 || t%2 == 1)
        {
            if(t<mi)
            break;

            if(t%4 == 0)
            {
                t/=4;
                auto itr=m.find(t);
                if(itr != m.end())
                {
                    f=1;
                    break;
                }
            }
            else if(t%2 == 1)
            {
                t-=1;
                t/=2;
                auto itr=m.find(t);
                if(itr != m.end())
                {
                    f=1;
                    break;
                }
            }
            else
            break;
        }
        if(f==0)
        sig.push_back(a[i]);
    }
    ll ans=0;
    for (ll i = 0; i < sig.size(); i++)
    {
        ll count=log2(sig[i]);
        count++;
        // ll len=32-count;
        cout<<count<<'\n';
        ans+=dp[p-count];
    }
    cout<<ans%1000000007<<'\n';
    return 0;
}