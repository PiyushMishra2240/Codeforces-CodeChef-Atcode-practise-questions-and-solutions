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
        char a[n][m];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin>>a[i][j];
            }
        }
        ll x=-1,y=-1;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if(a[i][j] == 'R')
                {
                    x=i;
                    y=j;
                    break;
                }
            }
            if(x!=-1 && y!=-1)break;
        }
        bool check=true;
        for (ll i = x+1; i < n; i++)
        {
            for (ll j = 0; j < y; j++)
            {
                if(a[i][j] == 'R')
                {
                    check=false;
                    break;
                }
            }
            if(!check)break;
        }
        if(check)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}