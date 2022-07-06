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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        vector<ll> e,o;
        for (ll i = 0; i < n; i++)
        {
            if(a[i]%2==0)
            e.push_back(a[i]);
            else
            o.push_back(a[i]);
        }
        bool check=is_sorted(e.begin(),e.end());
        check&=is_sorted(o.begin(),o.end());
        if(check)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}