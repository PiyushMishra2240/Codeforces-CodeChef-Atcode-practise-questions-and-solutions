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
        if(arr[0]>arr[1])
        {
            cout<<"YES\n";
            continue;
        }
        else
        {
            ll f=0;
            for (ll i = 1; i < n-1; i++)
            {
                if(arr[i+1]<arr[i])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                cout<<"YES\n";
            }
            else
            cout<<"NO\n";
        }
    }
    return 0;
}