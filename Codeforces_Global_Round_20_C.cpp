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
        ll cnt=0;
        for (ll i = 0; i < n-1; i++)
        {
            if(a[i] == a[i+1])cnt++;
        }
        if(cnt == n-1)cout<<n/2<<'\n';
        else
        {
            ll ans=0;
            if(a[0] == a[1])ans++;
            for (ll i = 1; i < n-2; i++)
            {
                if(a[i] == a[i+1])ans++;
            }
            if(ans == 1)
            {
                cout<<"0\n";
                continue;
            }
            if(ans == n-3)cout<<(n-2)/2<<'\n';
            else if(a[n-1] == a[n-2])
            cout<<ans+1<<'\n';
            else cout<<ans<<'\n';
        }
    }
    return 0;
}