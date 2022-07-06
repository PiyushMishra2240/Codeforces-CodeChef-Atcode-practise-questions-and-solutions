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
        string s;
        cin>>s;
        map<ll,ll> a,b;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            a[i-(s[i]-48)]++;
            b[i+(s[i]-48)]++;
        }
        for (auto itr = a.begin() ; itr != a.end(); itr++)
        {
            ans += ((itr -> second) * (itr -> second-1))/2;
        }
        for (auto itr = b.begin() ; itr != b.end(); itr++)
        {
            ans += ((itr -> second) * (itr -> second-1))/2;
        }

        cout<<ans<<'\n';        
    }
    return 0;
}