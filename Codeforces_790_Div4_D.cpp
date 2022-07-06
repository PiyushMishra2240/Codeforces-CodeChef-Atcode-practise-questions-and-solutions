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
        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin>>a[i][j];
            }
        }
        ll ans=0;
        for (ll i = 0; i < n; i++)
        {
            ll sum=0;
            for (ll j = 0; j < m; j++)
            {
                ll x=i,y=j;
                while (x+1 < n && y+1 < m)
                {
                    sum+=a[x][y];
                    x++;
                    y++;
                }
                x=i,y=j;
                while(x-1>=0 && y-1>=0)
                {
                    sum+=a[x][y];
                    x--;
                    y--;
                }
                x=i,y=j;
                while(x-1>=0 && y+1<m)
                {
                    sum+=a[x][y];
                    x--;
                    y++;
                }
                x=i,y=j;
                while(x+1<n && y-1>=0)
                {
                    sum+=a[x][y];
                    x++;
                    y--;
                }
                // if(n==m)
                if(i == n/2 && j == m/2)
                sum-=3*a[i][j];
                ans=max(ans,sum);
                sum=0;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}