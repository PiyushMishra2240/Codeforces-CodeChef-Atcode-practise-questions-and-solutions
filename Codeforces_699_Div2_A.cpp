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
        ll px,py;
        cin>>px>>py;
        string s;
        cin>>s;
        ll u=0,d=0,r=0,l=0;
        ll f1=0,f2=0;
        for (ll i = 0; i < s.size(); i++)
        {
            if(s[i] == 'U')
            u++;
            if(s[i] == 'D')
            d++;
            if(s[i] == 'R')
            r++;
            if(s[i] == 'L')
            l++;
        }
        if(px>0)
        {
            if(r >= px)
            {
                f1=1;
            }
            else
            {
                cout<<"NO\n";
                continue;
            }
        }
        else if(px<0)
        {
            if(l >= abs(px))
            {
                f1=1;
            }
            else
            {
                cout<<"NO\n";
                continue;
            }
        }
        else if(px == 0)
        f1=1;

        if(py>0)
        {
            if(u >= py)
            {
                f2=1;
            }
            else
            {
                cout<<"NO\n";
                continue;
            }
        }
        else if(py<0)
        {
            if(d >= abs(py))
            {
                f2=1;
            }
            else
            {
                cout<<"NO\n";
                continue;
            }
        }
        else if(py == 0)
        f2=1;

        if(f1 == 1 && f2 == 1)
        cout<<"YES\n";
    }
    
    return 0;
}
