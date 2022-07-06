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
        ll n,x;
        cin>>n>>x;
        ll a[n],b[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        if(n>=2*x)
        {
            cout<<"YES\n";
            continue;
        }
        if(n==1)
        {
            cout<<"YES\n";
            continue;
        }
        sort(b,b+n);
        ll f=0;
        for (ll i = n-x; i < x; i++)
        {
            if(a[i]!=b[i])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}