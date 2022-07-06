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
        set<ll> s;
        for (ll i = 0; i < n; i++)
        {
            ll tm;
            cin>>tm;
            s.insert(tm);
        }
        if(n==1)
        {
            cout<<"1\n";
            continue;
        }
        ll si=s.size();
        for (ll i = 1; i <= n; i++)
        {
            cout<<max(i,si)<<" ";
        }
        cout<<'\n';
    }
    return 0;
}