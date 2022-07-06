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
        string s;
        char c;
        cin>>s>>c;
        if(s.length() == 1)
        {
            if(s[0] == c)
            {
                cout<<"YES\n";
                continue;
            }
            else
            {
                cout<<"NO\n";
                continue;
            }
        }
        vector<ll> a;
        for (ll i = 0; i < s.length(); i++)
        {
            if(s[i] == c)
            a.push_back(i+1);
        }
        ll f=0;
        for (ll i = 0; i < a.size(); i++)
        {
            if(a[i]%2 == 1)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    
    return 0;
}