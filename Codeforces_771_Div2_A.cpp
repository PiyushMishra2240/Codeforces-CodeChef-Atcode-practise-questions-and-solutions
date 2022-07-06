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
        if(n==1)
        {
            cout<<a[0];
            cout<<'\n';
            continue;
        }
        ll b[n];
        for (ll i = 0; i < n; i++)
        {
            b[i]=a[i];
        }
        sort(b,b+n);
        ll num=0,in=0,l=0;
        for (ll i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                num=b[i];
                in=i;
                break;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if(a[i] == num)
            {
                l=i;
                break;
            }
        }
        for (ll i = 0; i < in; i++)
        {
            cout<<a[i]<<" ";
        }
        
        for (ll i = l; i >= in; i--)
        {
            cout<<a[i]<<" ";
        }
        
        for (ll i = l+1; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}