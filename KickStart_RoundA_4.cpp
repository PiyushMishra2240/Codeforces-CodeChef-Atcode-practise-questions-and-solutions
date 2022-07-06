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
    ll c=1;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
        ll cnt=0;
        for (ll i = a; i <= b; i++)
        {
            ll sum=0,p=1;
            ll x=i;
            while (x)
            {
                sum+=x%10;
                p*=x%10;
                x/=10;
            }
            if(p%sum == 0)
            cnt++;
        }
        cout<<"Case #"<<c<<": "<<cnt<<'\n';
        c++;
    }
    return 0;
}