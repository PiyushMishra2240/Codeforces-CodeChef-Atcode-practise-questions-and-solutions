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
        ll s=0;
        map<ll,ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            s += arr[i];
            m[arr[i]]++;
        }
        ll num = (2*s)/n;
        if((2*s)%n != 0)
        cout<<"0\n";
        else
        {
            ll count=0;
            for (ll i = 0; i < n; i++)
            {
                ll temp = num - arr[i];
                if(m.count(temp))
                {
                    count+= m[temp];
                }
                if(arr[i] == temp)
                count--;
            }
            cout<<count/2<<'\n';
        } 
    }
    return 0;
}