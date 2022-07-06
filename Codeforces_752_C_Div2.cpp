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
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        stack<ll> s,e;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin>>temp;
            s.push(temp);
        }
        ll a,x,z;
        while (!s.empty())
        {
            a=s.size();
            x=s.top();
            if(x%(a+1) != 0)
            {
                s.pop();
                while (!e.empty())
                {
                    z=e.top();
                    s.push(z);
                    e.pop();
                }
            }
            else
            {
                e.push(x);
                s.pop();
            }
        }
            if(e.size() > 0)
            cout<<"NO\n";
            else
            cout<<"YES\n";
    }
    return 0;
}