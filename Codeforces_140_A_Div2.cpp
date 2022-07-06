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
    map<ll,ll> m; 
    ll ans1=0,ans2=0;
    ll q;
    for (ll i = 0; i < n; i++)
    {
        ll t;
        cin>>t;
        m.insert({t,i+1});
    }
    cin>>q;
    while (q--)
    {
        ll x,temp=0;
        cin>>x;
        auto itr = m.find(x);
        ans1 += itr->second;
        temp += itr->second;
        ans2 += n-temp+1;
    }
    cout<<ans1<<" "<<ans2;
    return 0;
}