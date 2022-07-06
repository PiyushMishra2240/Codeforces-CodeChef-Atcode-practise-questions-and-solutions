#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define big 1000000007
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
        ll num=1,deno=1;
        for (ll i = 1; i < 2*n; i++)
        {
            num = (num*i)%big;
        }
        for (ll i = 1; i < n; i++)
        {
            deno = (deno*i)%big;
        }
        cout<<(num/deno)%big<<'\n';
    }
    return 0;
}