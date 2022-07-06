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
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if(is_sorted(arr,arr+n))
    {
        cout<<n;
    }
    else if(is_sorted(arr,arr+n/2) || is_sorted(arr+n/2,arr+n))
    {
        cout<<n/2;
    }
    else if(is_sorted(arr,arr+n/4) || is_sorted(arr+n/4,arr+n/2) || is_sorted(arr+n/2,arr+3*n/4) || is_sorted(arr+3*n/4,arr+n))
    {
        cout<<n/4;
    }
    else if(is_sorted(arr,arr+n/8) || is_sorted(arr+n/8,arr+n/4) || is_sorted(arr+n/4,arr+n/2) || is_sorted(arr+n/2,arr+5*n/8)|| is_sorted(arr+5*n/8,arr+3*n/4) || is_sorted(arr+3*n/4,arr+n))
    {
        cout<<n/8;
    }
    else
    {
        cout<<n/16;
    }
    return 0;
}