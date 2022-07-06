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
        ll sum=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll mx=INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            if(a[i]>mx)
            mx=a[i];
        }
        // for (ll i = 0; i < n; i++)
        // {
        //     sum+=a[i];
        // }
        sum-=mx;
        // cout<<sum<<'\n';

        if(mx==0)
        cout<<"0\n";
        else if(sum>=mx)
        cout<<"1\n";
        else if(sum<mx)
        cout<<mx-sum<<'\n';
    }
    return 0;
}