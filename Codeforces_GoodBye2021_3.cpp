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
        if(n == 1 || n == 2)
        {
            cout<<"0\n";
            continue;
        }
        ll ans=0;
        unordered_map<ll,ll> m;
        sort(arr,arr+n);
        for (ll i = 0; i < n-1; i++)
        {
            m[arr[i+1]-arr[i]]++;
        }
       
        ll mx=INT_MIN,diff=INT_MIN;
        for (auto itr = m.begin(); itr != m.end(); itr++)
        {
            if(itr->second > mx)
            {
                mx = itr->second;
                diff = itr->first;
            }
        }

        for (ll i = 0; i < n-1; i++)
        {
            if(arr[i]+diff != arr[i+1])
            ans++;
        }
        
        if(ans!=0)
        cout<<ans+1<<'\n';
        else
        cout<<ans<<'\n';
    }
    return 0;
}