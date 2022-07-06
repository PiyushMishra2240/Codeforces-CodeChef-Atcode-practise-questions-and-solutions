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
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll t;
        cin>>t;
        s.insert(t);
    }
    cout<<s.size();
    return 0;
}