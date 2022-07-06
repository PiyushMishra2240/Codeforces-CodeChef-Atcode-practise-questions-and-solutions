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
        vector<ll> v(n);
        ll even=0,ones=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            even++;
            if(v[i] == 1)
            ones++;
        }
        if(even == 0 || even == n)
        {
            cout<<"YES\n";
            continue;
        }
        if(ones>=1)
        {
            sort(v.begin(),v.end());
            bool c=true;
            for (ll i = 0; i < n; i++)
            {
                if(v[i+1]-v[i] == 1)
                {
                    c=false;
                    break;
                }
            }
            c?cout<<"YES\n":cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}