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
        ll n,x,y;
        cin>>n>>x>>y;
        if(y-x>=n-1)
        {
            for (ll i = 0; i < n-1; i++)
            {
                cout<<x+i<<" ";
            }
            cout<<y<<'\n';
        }
        else if(y == n)
        {
            for (ll i = 1; i <= y; i++)
            {
                cout<<i<<" ";
            }
            cout<<'\n';
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                cout<<i+1<<" ";
            }
            cout<<'\n';
        }
    }
    return 0;
}