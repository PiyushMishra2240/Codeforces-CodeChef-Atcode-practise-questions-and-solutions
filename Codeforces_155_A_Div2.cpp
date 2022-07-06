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

    ll n;
    cin>>n;
    vector<ll> v;
    unordered_map<ll,ll> m;
    for (ll i = 0; i < 2*n; i++)
    {
        ll t;
        cin>>t;
        v.push_back(t);
        m[t]++;
    }
    int f=0;
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        if(itr->second%2 != 0)
        {
            cout<<"-1";
            f=1;
            break;
        }
    }
    
    if(f==0)
    {
        for (auto itr = m.end(); itr != m.end(); itr++)
        {
            while (itr->second--)
            {
                auto i = find(v.begin(),v.end(),itr->first);
                
            }
            
        }
        
    }
}