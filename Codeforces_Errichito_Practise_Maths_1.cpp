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

    ll n,o1=0;
    cin>>n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    ll ans=0,z=0;
    for (ll i = 0; i < n; i++)
    {
        if(arr[i] != -1 && arr[i] != 1)
        {
            if(arr[i] > 0)
            ans += arr[i]-1;
            else if(arr[i] == 0)
            {
                ans++;
                z++;
            }
            else
            {
                ans += abs(arr[i]+1);
                arr[i] = -1;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if(arr[i] == -1)
        o1++;
    }
    if(o1%2== 1 && z  == 0)
    ans+=2;
    cout<<ans;
    return 0;
}