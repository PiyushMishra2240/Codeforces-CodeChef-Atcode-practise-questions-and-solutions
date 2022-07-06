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
        
        if(a[n-2]>a[n-1])
        {
            cout<<"-1\n";
            continue;
        }

        if(a[n-1]<0)
        {
            if(is_sorted(a,a+n))
            {
                cout<<"0\n";
                continue;
            }
            else
            {
                cout<<"-1\n";
                continue;
            }
        }
        ll ans=a[n-2]-a[n-1];
        ll op=n-2;
        cout<<op<<'\n';
        ll i=1;
        while (op--)
        {
            cout<<i<<" "<<n-1<<" "<<n<<'\n';
            i++;
        }
        
    }
    return 0;
}