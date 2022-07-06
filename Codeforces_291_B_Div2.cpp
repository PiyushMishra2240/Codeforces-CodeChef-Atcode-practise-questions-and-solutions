#include<bits/stdc++.h>
using namespace std;
typedef long double ll;

int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,x,y;
    cin>>n>>x>>y;
    unordered_map<ll,ll> m;
    while (n--)
    {
        ll slope;
        ll x1,y1;
        cin>>x1>>y1;
        slope = (y1-y)/(x1-x);
        m[slope]++;
    }
    cout<<m.size();
    return 0;
}