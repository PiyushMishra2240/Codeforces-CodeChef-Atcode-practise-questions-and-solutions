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
        ll arr1[n],arr2[n];
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            cin>>arr1[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin>>arr2[i];
            if(arr2[i] == 0)
            {
                v.push_back(arr1[i]);
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        for (ll i = 0,j=0; i < n; i++)
        {
            if(arr2[i] == 0)
            {
                arr1[i] = v[j];
                ++j;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            cout<<arr1[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}