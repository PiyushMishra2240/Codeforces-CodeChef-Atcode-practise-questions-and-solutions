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
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        ll cnt=a[0]*2+1;
        for (ll i = 1; i < n; i++)
        {
            if(i != n-1)cnt+=a[i]+1;
            else cnt++;
        }
        if(cnt<=m)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;   
}