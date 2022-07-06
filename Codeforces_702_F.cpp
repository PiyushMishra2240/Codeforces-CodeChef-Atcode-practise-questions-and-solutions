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
        map<ll,ll> m1,m2;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin>>temp;
            m1[temp]++;
        }
        // for (auto itr = m1.begin(); itr != m1.end(); itr++)
        // {
        //     m2[itr->second]++;
        // }
        // ll maxfre=0,mx=INT_MIN,mx2=INT_MIN;
        // for (auto itr = m2.begin(); itr != m2.end(); itr++)
        // {
        //     if(itr->second>mx)
        //     {
        //         mx=itr->second;
        //         maxfre=itr->first;
        //     }
        // }
        // ll ans=0;
        // for (auto itr = m1.begin(); itr != m1.end(); itr++)
        // {
        //     if(itr->second > maxfre)
        //     {
        //         ans+=itr->second-maxfre;
        //     }
        //     else if(itr->second < maxfre)
        //     {
        //         ans+=itr->second;
        //     }
        // }
        // ll ans1=0;
        // for (auto i = m1.begin(); i != m1.end(); i++)
        // {
        //     if(i->second>mx2)
        //     {
        //         mx2=i->second;
        //     }
        // }
        // ans1=n-mx2;

        // cout<<min(ans,ans1)<<'\n';

        ll ans=INT_MAX;
        for (auto itr = m1.begin(); itr != m1.end(); itr++)
        {
            if(m2.find(itr->second)!=m2.end())
            continue;
            ll freq=itr->second;
            m2[itr->second]++;
            ll cnt=0;
            for (auto x = m1.begin(); x != m1.end(); x++)
            {
                if(x->second > freq)
                cnt+=x->second-freq;
                else if(x->second<freq)
                cnt+=x->second;
            }
            ans=min(ans,cnt);
        }
        cout<<ans<<'\n';
    }
    return 0;
}

