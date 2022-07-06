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
        vector<ll> v(n);
        ll mi=INT_MAX,mx=INT_MIN,imi=-1,imx=-1;
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]>mx)
            {
                mx=v[i];
                imx=i+1;
            }
            if(v[i]<mi)
            {
                mi=v[i];
                imi=i+1;
            }
        }
        if(n==1)
        {
            cout<<"1 1\n";
            continue;
        }
        cout<<imi<<" "<<imx<<'\n';
    }
    return 0;
}