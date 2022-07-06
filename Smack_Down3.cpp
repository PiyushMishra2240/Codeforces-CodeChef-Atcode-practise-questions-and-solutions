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
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            if( i > 0)
            {
                if(arr[i-1] == arr[i] && arr[i] > i + 1)
                v.push_back(arr[i] - (i + 1));
                else
                v.push_back(arr[i] - 1);
            }
            else
            v.push_back(arr[i] - 1);
        }
        for (ll i = 0; i < n; i++)
        {
            cout<<v[i]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}