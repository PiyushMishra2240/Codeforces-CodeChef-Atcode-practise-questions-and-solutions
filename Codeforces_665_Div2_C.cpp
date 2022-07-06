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
        ll a[n],b[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        ll mi=INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            if(a[i]<mi)
            mi=a[i];
        }
        sort(a,a+n);
        vector<ll> in; // for storing of index of num which arent divisible by mi
        for (ll i = 0; i < n; i++)
        {
            if(a[i]%mi != 0)
            in.push_back(i);
        }
        ll f=0;
        for (ll i = 0; i < in.size(); i++)
        {
            ll temp=in[i];
            if(a[temp] != b[temp])  //checking if the not divisible num were in the right place
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