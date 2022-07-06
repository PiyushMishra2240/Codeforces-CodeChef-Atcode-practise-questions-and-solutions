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
        ll k;
        cin>>k;
        map<char,ll> m;
        for (ll i = 0; i < k; i++)
        {
            char c;
            cin>>c;
            m[c]++;
        }
        ll cnt=0,ans=0;
        for (ll i = 0; i < n; i++)
        {
            if(m.find(s[i]) != m.end())
            {
                ans=max(cnt,ans);
                cnt=1;
            }
            else cnt++;
        }
        cout<<ans<<'\n';        
    }
    return 0;
}