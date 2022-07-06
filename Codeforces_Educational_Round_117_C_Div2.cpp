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
        ll k,x;
        cin>>k>>x;
        ll n = 2*k-1;
        if((n*(n+1))/2 <= x)
        cout<<(n*(n+1))/2<<'\n';
        else
        {
            ll i=1,sum=0;
            for ( i = 1; i <= k; i++)
            {
                sum+=i;
                if(sum >= x)
                break;
            }
            cout<<i<<'\n';
        }
    }
    return 0;
}