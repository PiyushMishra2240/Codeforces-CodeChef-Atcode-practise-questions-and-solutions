#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        ll f=0;
        unordered_map<char,char> m;
        for (ll i = 0; i < s1.size(); i++)
        {
            if(m.find(s1[i]) == m.end())
            {
                ll g=0;
                for (auto itr = m.begin(); itr != m.end(); itr++)
                {
                    if(itr->second == s2[i])
                    {
                        g=1;
                        break;
                    }
                }
                if(g==0)
                m.insert({s1[i],s2[i]});
                else
                {
                    f=1;
                    break;
                }
            }
            else
            {
                auto itr = m.find(s1[i]);
                if(itr->second != s2[i])
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==0)
        cout<<"yes\n";
        else
        cout<<"no\n";
    }
    return 0;
}