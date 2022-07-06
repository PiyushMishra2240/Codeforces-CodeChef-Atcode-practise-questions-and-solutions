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
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        vector<ll> in(n);
        for (ll i = n; i >= 1; i--)
        {
            auto x=find(a.begin(),a.end(),i);
            in[i-1]=(x-a.begin()+1)%i;
            rotate(a.begin(),x,a.end());
            a.erase(a.begin());
        }
        for (ll i = 0; i < n; i++)
        {
            cout<<in[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}