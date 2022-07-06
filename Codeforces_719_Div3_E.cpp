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
        string s;
        cin>>s;
        ll cnt=0;
        vector<ll> pos;
        for (ll i = 0; i < n; i++)
        {
            if(s[i] == '*'){cnt++;pos.push_back(i);}
        }
        if(cnt == 0 || cnt == 1 || cnt == n)cout<<"0\n";
        else if(cnt%2 == 0)
        {
            ll p1=pos.size()/2;
            ll p2=pos.size()/2-1;
            ll steps1=0;
            ll steps2=0;
            ll shift=1;
            for (ll i = 0; i < p1; i++)
            {
                steps1+=(pos[p1]-pos[i]-shift);
                shift++;
            }
            shift=1;
            for (ll i = p1+1; i < pos.size(); i++)
            {
                steps1+=(pos[i]-pos[p1]-shift);
                shift++;
            }
            shift=1;
            for (ll i = 0; i < p2; i++)
            {
                steps2+=(pos[p2]-pos[i]-shift);
                shift++;
            }
            shift=1;
            for (ll i = p2+1; i < pos.size(); i++)
            {
                steps2+=(pos[i]-pos[p2]-shift);
                shift++;
            }
            cout<<min(steps2,steps1)<<'\n';
        }
        else
        {
            ll p=pos.size()/2;
            ll ans=0;
            ll shift=1;
            for (ll i = 0; i < p; i++)
            {
                ans+=pos[p]-pos[i]-shift;
                shift++;
            }
            shift=1;
            for (ll i = p+1; i < pos.size(); i++)
            {
                ans+=pos[i]-pos[p]-shift;
                shift++;
            }
            cout<<ans<<'\n';
        }
    }
    return 0;
}