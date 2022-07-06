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
        sort(arr,arr+n);
        ll diff = arr[n-1]-arr[0];
        while(diff>1)
        {
            ll q = diff/2;
            arr[0]+= q;
            arr[n-1]-= q;
            sort(arr,arr+n);
            diff = arr[n-1]-arr[0];
        }
        cout<<arr[n-1]-arr[0]<<"\n";
    }
    return 0;
}