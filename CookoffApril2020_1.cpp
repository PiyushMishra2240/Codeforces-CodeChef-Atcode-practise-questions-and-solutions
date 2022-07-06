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
    while(t--)
    {
        ll n,q,ans = 0;
        cin>>n>>q;
        ll arr[q*2];
        for (ll i = 0; i < q*2; i++)
        {
            cin>>arr[i];
        }
        ans += arr[0];
        for (ll i = 1; i < q*2; i++)
        {
            ans += abs(arr[i] - arr[i-1]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}