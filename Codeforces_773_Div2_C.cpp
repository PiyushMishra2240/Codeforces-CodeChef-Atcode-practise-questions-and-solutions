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
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n);
        map<ll,ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        ll op=0;
        for (auto itr = m.begin(); itr != m.end(); itr++)
        {
            if(itr->second>0)
            {
                auto fi=m.find(itr->first*x);
                if(fi!=itr && fi!=m.end())
                {
                    if(fi->second>0)
                    {
                        if(fi->second >= itr->second)
                        fi->second-=itr->second;
                        else
                        {
                            itr->second-=fi->second;
                            fi->second=0;
                            op+=itr->second;
                        }
                    }
                }
                else
                op+=itr->second;
            }
        }
        cout<<op<<'\n';
    }
    return 0;
}