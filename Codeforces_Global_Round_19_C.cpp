#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        if(n==3)
        {
            if(a[1]%2 == 1)
            {
                cout<<"-1\n";
                continue;
            }
        }
        else
        {
            ll f=0;
            for(ll i=1;i<n-1;i++)
            {
                if(a[i] != 1)
                {
                    f=1;
                    break;
                }
            }
            if(f == 0)
            {
                cout<<"-1\n";
                continue;
            }
        }
        ll cnt=0;
        for (ll i = 1; i < n-1; i++)
        {
            if(a[i]%2==0)
            cnt+=a[i]/2;
            else
            cnt+=(a[i]+1)/2;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}