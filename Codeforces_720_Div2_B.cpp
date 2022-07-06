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
        ll mi=INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]<mi)
            mi=a[i];
        }
        ll cnt=n-1;
        ll pos=0;
        for (ll i = 0; i < n; i++)
        {
            if(a[i]==mi)
            {
                pos=i;
                break;
            }
        } 
        cout<<cnt<<'\n';
        for (ll i = 0; i < n; i++)
        {
            if(i!=pos)
            {
                cout<<i+1<<" "<<pos+1<<" "<<a[pos]+abs(i-pos)<<" "<<a[pos]<<"\n";
            }
        }
        
    }
    return 0;
}