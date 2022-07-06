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
        if(n == 1 || n == 0)
        {
            cout<<arr[0]<<'\n';
            continue;
        }
        vector<ll> ans;
        sort(arr,arr+n);
        ans.push_back(arr[n-1]);
        ll mxgcd=arr[n-1];
        arr[n-1] = 0;
        while (true)
        {
            vector<pair<ll,ll>> gc;
            for (ll i = n-1; i >=0 ; i--)
            {
                if(arr[i] != 0)
                {
                    ll o = __gcd(mxgcd,arr[i]);
                    gc.push_back(make_pair(o,i));
                }
            }
            sort(gc.begin(),gc.end());
            ll h = gc.size()-1;
            mxgcd = gc[h].first;
            for (ll i = h; i >= 0; i--)
            {
                if(gc[i].first == mxgcd)
                {
                    ans.push_back(arr[gc[i].second]);
                    arr[gc[i].second] = 0;
                }
                else 
                break;
            }
            ll c=0;
            for (ll i = 0; i < n; i++)
            {
                if(arr[i] == 0)
                c++;
            }
            if(c == n)
            break;

        }
        for (ll i = 0; i < ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<'\n';
    }
    
    return 0;
}