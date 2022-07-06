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
        ll mi=INT_MAX;
        vector<ll> pos_diff;
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        ll ans=0;
        for (ll i = 0; i < n-1; i++)
        {
            ll mi_pos=i;
            for (ll j = mi_pos+1; j < n; j++)
            {
                if(arr[j]<arr[mi_pos])
                mi_pos=j;
            }
            if(mi_pos>i)
            {
                ll temp = arr[mi_pos];
                for (ll j = mi_pos; j > i; j--)
                {
                    arr[j] = arr[j-1];
                }
                arr[i] = temp;
                ans++;
                pos_diff.push_back(i);
                pos_diff.push_back(mi_pos);
                pos_diff.push_back(mi_pos-i);
            }
        }
        cout<<ans<<"\n";
        for (ll i = 0; i < pos_diff.size(); i+=3)
        {
            cout<<pos_diff[i]+1<<" "<<pos_diff[i+1]+1<<" "<<pos_diff[i+2]<<'\n';
        }
        
    }
    return 0;
}