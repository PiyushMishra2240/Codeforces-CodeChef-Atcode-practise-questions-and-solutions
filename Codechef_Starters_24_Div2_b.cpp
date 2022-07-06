#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll num,ll p)
{
    for (ll i = 1; i <=p-1; i++)
    {
        num *= 2;
    }
    return num;
}

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
        ll x;
        cin>>x;
        ll a,b,c;
        a=x;
        b=x;
        c=0;
        for(ll i=1;i<32;i++)
        {
            b+=power(2,i);
            ll t1=a|b;
            ll t2=b|c;
            ll t3=a|c;
            ll t4=t1&t2;
            ll t5=t4&t3;
            if(t5 == x)
            break;
            else
            b=x;
        }
        cout<<a<<" "<<b<<" "<<c<<'\n';
    }
    return 0;
}