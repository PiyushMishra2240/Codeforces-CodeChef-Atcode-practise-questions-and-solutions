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
        ll n,m;
        cin>>n>>m;
        ll ans=INT_MAX;
        vector<string> v;
        while (n--)
        {
            string tt;
            cin>>tt;
            v.push_back(tt);
        }
        for (ll i = 0; i < v.size(); i++)
        {
            for (ll j = i+1; j < v.size(); j++)
            {
                ll cnt=0;
                string s1=v[i];
                string s2=v[j];
                for (ll k = 0; k < m; k++)
                {
                    if(s1[k] != s2[k])
                    {
                        cnt+=abs((s1[k]-'0') - (s2[k]-'0'));
                    }
                }
                ans=min(cnt,ans);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;   
}