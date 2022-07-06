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
    ll c=1;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        ll cnt=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ll cost=0;
        for (ll i = 0; i < n-1; i++)
        {
            ll mi=a[i];
            ll in=i;
            for (ll j = i; j < n; j++)
            {
                if(a[j]<mi)
                {
                    mi=a[j];
                    in=j;
                }
            }
            reverse(a.begin()+i,a.begin()+in+1);
            // for (ll i = 0; i < n; i++)
            // {
            //     cout<<a[i]<<" ";
            // }
            // cout<<'\n';
            cnt++;
            cost+=in-i+1;
            if(is_sorted(a.begin(),a.end()))
            break;
        }
        cost+=n-1-cnt;
        cout<<"Case #"<<c<<": "<<cost<<'\n';
        c++;
    }
    return 0;
}