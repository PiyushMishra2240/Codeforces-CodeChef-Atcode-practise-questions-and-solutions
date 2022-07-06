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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ll cnt=0;
        for (ll i = 1; i < n-1; i++)
        {
            if(a[i] > a[i-1] && a[i] > a[i+1])
            {
                if(i+2<n)
                {
                    a[i+1]=max(a[i],a[i+2]);
                }
                else
                {
                    a[i+1]=a[i];
                }
                cnt++;
            }
        }
        cout<<cnt<<'\n';
        for (ll i = 0; i < n; i++)
        {
            cout<<a[i]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}