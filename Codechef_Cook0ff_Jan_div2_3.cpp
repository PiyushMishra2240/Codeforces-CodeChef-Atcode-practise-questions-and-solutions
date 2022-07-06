#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isprime(ll num)
{
    ll f=0;
    for (ll i = 2; i <= sqrt(num); i++)
    {
        if(num%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    return true;

    return false;
}

int main()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<ll> v;
    for (ll i = 2; i <= 100000; i++)
    {
        if(isprime(i))
        v.push_back(i);
    }
    
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        for (ll i = 0; i < n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<'\n';
   }
    return 0;
}