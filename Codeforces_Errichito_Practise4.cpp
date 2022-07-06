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

    ll n,f=0;
    cin>>n;
    vector<ll> v;
    for (ll i = 2; i <= n; i++)
    {
        for (ll j = 2; j < i; j++)
        {
            if(i%j == 0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            v.push_back(i);
        }
        else
        f=0;
    }
    if(v[v.size()/2-1]*v[v.size()/2] <= n)
    {
        
    }
    return 0;
}