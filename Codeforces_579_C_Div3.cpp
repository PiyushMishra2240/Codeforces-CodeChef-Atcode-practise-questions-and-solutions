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

    ll n;
    cin>>n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll gcd=0;
    for (ll i = 0; i < n; i++)
    {
        gcd=__gcd(a[i],gcd);
    }
    ll cnt=1;
    if(gcd%2==0)
    {
        ll p=0;
        while (gcd%2==0)
        {
            p++;
            gcd/=2;
        }
        p++;
        cnt*=p;
    }
    for (ll i = 3; i <= sqrt(gcd); i+=2)
    {
        if(gcd%i==0)
        {
            ll p=0;
            while (gcd%i==0)
            {
                p++;
                gcd/=i;
            }
            p++;
            cnt*=p;
        }
    }
    if(gcd>2)
    cnt*=2;
    cout<<cnt<<'\n';
}