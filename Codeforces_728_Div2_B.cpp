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
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        vector<pair<ll,ll>> v;
        for (ll i = 0; i < n; i++)
        {
            v.push_back({arr[i],i+1});
        }
        sort(v.begin(),v.end());
        ll cnt=0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i+1; j < n; j++)
            {
                if(v[i].first*v[j].first > 2*n)
                break;
                else if(v[i].first*v[j].first == v[i].second+v[j].second)
                cnt++;
            }
            
        }
        cout<<cnt<<'\n';
    }
    return 0;
}