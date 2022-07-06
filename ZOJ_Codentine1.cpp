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
        ll n,m;
        cin>>n>>m;
        ll temp = m;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll sum=0,i=0;
        if(m == 1)
        {
            cout<<arr[0]*arr[1]<<'\n';
            continue;
        }
        
        while (temp--)
        {
            sum += arr[i]*arr[2*m-i-1];
            i++;
        }
        cout<<sum<<"\n";
    }
    return 0;
}