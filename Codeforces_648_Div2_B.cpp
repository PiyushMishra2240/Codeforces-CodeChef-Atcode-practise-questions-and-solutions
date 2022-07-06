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
        vector<ll> a(n),b(n);
        for (ll i = 0; i < n; i++)cin>>a[i];
        for (ll i = 0; i < n; i++)cin>>b[i];
        ll ones=0,zeros=0;
        for (ll i = 0; i < n; i++)
        {
            if(b[i] == 0)zeros++;
            else ones++;
        }
        if(ones == n || zeros == n)
        {
            if(is_sorted(a.begin(),a.end()))cout<<"YES\n";
            else cout<<"NO\n";
            continue;
        }
        if(ones >= 1 || zeros >= 1)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}