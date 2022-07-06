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
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        map<ll,ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        vector<ll> b;
        for(auto itr = m.begin(); itr != m.end(); itr++)
        {
            if(itr->second >= k)b.push_back(itr->first);
        }
        if(b.size() == 0)cout<<"-1\n";
        else
        {
            ll se=b[0],ei=b[0];
            ll ansi=se,ansf=ei;
            for(ll i=0;i<b.size()-1;i++) //11,13,14
            {
                if(b[i+1]-b[i] == 1)
                {
                    ei=b[i+1];
                }
                else
                {
                    if(ei-se > ansf-ansi)
                    {
                        ansi=se;
                        ansf=ei;
                    }
                    se=b[i+1];
                    ei=b[i+1];
                }
            }
            if(ei-se > ansf-ansi)
            {
                ansi=se;
                ansf=ei;
            }
            cout<<ansi<<" "<<ansf<<'\n';
        }
    }
    return 0;
}