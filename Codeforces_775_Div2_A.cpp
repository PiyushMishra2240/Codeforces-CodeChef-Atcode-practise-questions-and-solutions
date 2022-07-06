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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ll cnt=0;
        ll previn=0;
        for (ll i = 0; i < n; i++)
        {
            if(a[i] == 1)
            previn=i;
            else
            break;
        }
        
        for (ll i = previn+1; i < n; i++)
        {
            if(a[i] == 1 && a[i-1] != 1)
            {
                cnt+= i-previn;
                previn=i;
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}