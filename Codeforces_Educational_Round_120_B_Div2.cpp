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
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        string s;
        cin>>s;
       ll a[n];
       ll x=1;
       for (ll i = 0; i < n; i++)
       {
           if(s[i] == '0')
           {
               a[i] = x;
               x++;
           }
       }
       for (ll i = 0; i < n; i++)
       {
           if(s[i] == '1')
           {
               a[i] = x;
               x++;
           }
       }
       for (ll i = 0; i < n; i++)
       {
           cout<<a[i]<<" ";
       }
       cout<<'\n';
    }
    return 0;
}