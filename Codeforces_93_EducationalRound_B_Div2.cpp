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
        string s;
        cin>>s;
        map<ll,ll,greater<ll>> m;
        ll currmax=0;
        for (ll i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')
            {
                if(currmax != 0)
                {
                    //cout<<currmax<<" ";
                    m[currmax]++;
                    currmax = 0;
                }
            }
            else
            {
                currmax++;
                if(i == s.size()-1)
                m[currmax]++;
            }
        }
        ll ans=0,f=0,count=0;
        // for (auto x = m.begin(); x != m.end(); x++)
        // {
        //     cout<<x->first<<" "<<x->second;
        //     cout<<"\n";
        // }
        // cout<<"\n";
        for (auto itr = m.begin(); itr != m.end(); itr++)
        {
            if(itr -> second % 2 == 1 && itr->second == 1) 
            {
                if(count%2 == 0)
                {
                    ans += (itr->first)*((itr->second)/2+1);
                    ++count;
                }
                else
                {
                    ++count;
                    continue;
                }
            }
            else if(itr-> second % 2 == 1)
            {
                ans += (itr->first)*((itr->second)/2+1);
                count += itr->second;
            }
            else if(itr->second%2 == 0)
            {
                ans += (itr->first)*(itr->second/2);
                count += itr->second;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}