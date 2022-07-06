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
        string s;
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        vector<pair<char,ll>> v;
        cin>>s;
        for (ll i = 0; i < n; i++)
        {   
            v.push_back({s[i],arr[i]});
        }
        sort(v.begin(),v.end());
        ll f=0;
        for (ll i = 0; i < v.size(); i++)
        {
            if(v[i].second > (i+1) && v[i].first == 'R')
            {
                f=1;
                break;
            }
            else if(v[i].second < (i+1) && v[i].first == 'B')
            {
                f=1;
                break;
            }
        }
        if(f==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}