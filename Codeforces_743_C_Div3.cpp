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
        ll n,k;
        cin>>n>>k;
        ll arr[k];
        for (ll i = 0; i < k; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+k);
        ll mice=0,pos=0;
        for (ll i = k-1; i >= 0; i--)
        {
            if(arr[i]>pos)
            {
                ++mice;
                pos += n-arr[i];
            }
        }
        cout<<mice<<'\n';
    }
    return 0;
}