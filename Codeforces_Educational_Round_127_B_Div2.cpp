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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        if(n == 1)cout<<"YES\n";
        else
        {
            ll f1=0,f2=0,f3=0;
            ll l=a[0];
            for (ll i = 1; i < n; i++)
            {
                if(a[i] == l+i || a[i]-1 == l+i || a[i]+1 == l+i)continue;
                else
                {
                    f1=1;
                    break;
                }
            }
            l=a[0]-1;
            for (ll i = 1; i < n; i++)
            {
                if(a[i] == l+i || a[i]-1 == l+i || a[i]+1 == l+i)continue;
                else
                {
                    f2=1;
                    break;
                }
            }
            l=a[0]+1;
            for (ll i = 1; i < n; i++)
            {
                if(a[i] == l+i || a[i]-1 == l+i || a[i]+1 == l+i)continue;
                else
                {
                    f3=1;
                    break;
                }
            }
            if(f1 == 0 || f2 == 0 || f3 == 0)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}