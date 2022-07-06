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
        if(s.size() == 1 || s.size() == 2)cout<<"YES\n";
        else
        {   
            map<char,ll> m;
            for (ll i = 0; i < s.size(); i++)
            {
                m[s[i]]++;
            }
            vector<ll> fre;
            for (auto itr = m.begin(); itr != m.end(); itr++)
            {
                fre.push_back(itr->second);
            }
            sort(fre.begin(),fre.end());
            if(fre[fre.size()-1]-fre[0]>1)cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}