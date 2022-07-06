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
        ll bits=32-__builtin_clz(n-1);
        ll powerof2=pow(2,bits-1);
        for (ll i = powerof2-1; i >= 0; i--)
        {
            cout<<i<<" ";
        }
        for (ll i = powerof2; i < n; i++)
        {
            cout<<i<<" ";
        }
        cout<<'\n';
    }
    return 0;
}