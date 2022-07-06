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
        ll n;
        cin>>n;
        if(n<20)
        {
            cout<<"YES\n";
            for (ll i = 0; i < n; i++)
            {
                cout<<power(3,i)<<" ";
            }
            cout<<'\n';
        }
        else
        cout<<"NO\n";
    }
    return 0;
}