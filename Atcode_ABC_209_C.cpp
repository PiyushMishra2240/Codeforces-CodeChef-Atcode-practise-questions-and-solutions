#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define big 1000000007

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
    sort(arr,arr+n);
    ll sum=1,ans=arr[0];
    for (ll i = 1; i < n; i++)
    {
        if(arr[i-1] == arr[i] && arr[i] - sum > 0)
        {
            ans = ans*(arr[i]-sum)%big;
            sum++;
        }
        else
        {
            ans= ans*(arr[i]-sum)%big;
            sum++;
        }
    }
    cout<<ans;
    return 0;
}