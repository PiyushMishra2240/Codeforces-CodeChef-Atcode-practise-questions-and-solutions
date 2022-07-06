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
        ll arr[7];
        for (ll i = 0; i < 7; i++)
        {
            cin>>arr[i];
        }
        cout<<arr[6]-(arr[0]+arr[1])<<" "<<arr[0]<<" "<<arr[1]<<'\n';
    }

    return 0;
}