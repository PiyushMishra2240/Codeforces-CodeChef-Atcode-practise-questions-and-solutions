#include<bits/stdc++.h>
using namespace  std;
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
    ll c=1;
    while (t--)
    {
        cout<<"Case #"<<c<<": ";
        c++;
        ll n;
        cin>>n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ll cnt=0;
        sort(a.begin(),a.end());
        for (ll i = 0; i < n; i++)
        {
            if(cnt<a[i])
            cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}