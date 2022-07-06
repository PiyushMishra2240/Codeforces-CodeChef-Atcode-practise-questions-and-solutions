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
        ll arr[n];
        map<ll,ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        priority_queue<ll> p;
        for (auto itr = m.begin(); itr != m.end(); itr++)
        {
            p.push(itr->second);
        }
        if(p.size() == 1)
        {
            cout<<p.top()<<'\n';
            continue;
        }
        while (true)
        {
            ll h=p.top();
            p.pop();
            ll sh=p.top();
            p.pop();
            h--;
            sh--;
            if(h != 0)
            p.push(h);
            if(sh != 0)
            p.push(sh);
            if(p.size() == 1)
            {
                cout<<p.top()<<'\n';
                break;
            }
            if(p.empty())
            {
                cout<<"0\n";
                break;
            }
        }
    }
    return 0;
}