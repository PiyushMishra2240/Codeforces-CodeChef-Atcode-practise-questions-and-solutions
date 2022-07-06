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
        ll n,k;
        cin>>n>>k;
        vector<ll> h(n);
        ll mx=INT_MIN;
        ll mi=INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            cin>>h[i];
            if(h[i]>mx)
            mx=h[i];
            if(h[i]<mi)
            mi=h[i];
        }
        if(n == 1)
        {
            cout<<"-1\n";
            continue;
        }

        if(h[0]>=h[1])
        {
            ll f=0;
            for (ll i = 1; i < n-1; i++)
            {
                if(h[i+1]>h[i])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                cout<<"-1\n";
                continue;
            }
        }
        ll f=0;
        ll pos=0;
        if(k>(mx-mi)*(n-1))
        {
            cout<<"-1\n";
            continue;
        }
        while(k>0)
        {
            for (ll i = 0; i < n-1; i++)
            {
                if(h[i]<h[i+1])
                {
                    h[i]++;
                    pos=i+1;
                    k--;
                    break;
                }
            }
            ll j=0;
            if(k>0)
            {
                for (; j < n-1; j++)
                {
                    if(h[j]<h[j+1])
                    break;
                }
            }
            if(j==n-1)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout<<"-1\n";
            continue;
        }
        cout<<pos<<'\n';
    }
    return 0;
}
