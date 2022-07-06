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

    ll n;
    cin>>n;
    ll ans=0;
    char arr[n][n];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (ll r = 0; r < n; r++)
    {
        ll count=0;
        for (ll c = 0; c < n; c++)
        {
            if(arr[r][c] == 'C')
            ++count;
        }
        ans += (count*(count-1))/2;
    }
    for (ll c = 0; c < n; c++)
    {
        ll count=0;
        for (ll r = 0; r < n; r++)
        {
            if(arr[r][c] == 'C')
            ++count;
        }
        ans += (count*(count-1))/2;
    }
    cout<<ans;
    return 0;
}