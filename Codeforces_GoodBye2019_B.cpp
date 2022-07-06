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
        ll l=0,r=0;
        for (ll i = 0; i < n-1; i++)
        {
            if(abs(a[i+1]-a[i]) > 1)
            {
               l=i+1;
               r=i+2;
               break;
            }
        }
        if(l==0 && r==0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            cout<<l<<" "<<r<<'\n';
        }
    }
    return 0;
}