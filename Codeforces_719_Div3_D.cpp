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
        vector<ll> a(n);
        unordered_map<ll,ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            m[a[i]-i]++;
        }
        ll cnt=0;
        for(auto itr=m.begin();itr!=m.end();itr++)
        {
            cnt+=(itr->second)*(itr->second-1)/2;
        }
        cout<<cnt<<'\n';        
    }
    return 0;
}