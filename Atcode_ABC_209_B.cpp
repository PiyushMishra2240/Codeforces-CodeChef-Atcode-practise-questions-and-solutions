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

    ll n,x;
    cin>>n>>x;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(i%2 == 1)
        arr[i]-=1;
    }
    ll sum=0,f=0;
    for (ll i = 0; i < n; i++)
    {
        sum+=arr[i];
        if(sum>x)
        {
            cout<<"No\n";
            f=1;
            break;
        }
    }
    if(f==0)
    cout<<"Yes\n";
    return 0;
}