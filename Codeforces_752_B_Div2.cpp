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
        if(n%2 == 0)
        cout<<"YES\n";
        else
        {
            ll sd=0;
            for (ll i = 0; i < n-1; i++)
            {
                if(arr[i]>=arr[i+1])
                {
                    sd=1;
                    break;
                }
            }
            if(sd == 1)
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
    }
    return 0;
}