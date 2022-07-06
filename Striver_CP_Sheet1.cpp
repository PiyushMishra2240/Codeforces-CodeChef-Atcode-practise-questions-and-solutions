#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll num,ll p)
{
    for (ll i = 1; i <=p-1; i++)
    {
        num *= 10;
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
    
    ll x;
    cin>>x;
    ll ans;
    if(x%10>=5)
    {
        ans=9-x%10;
        if(ans==0 && x/10 == 0)
        ans=x;
        x/=10;
    }
    else
    {
        ans=x%10;
        x/=10;
    }
    ll i=1;
    while(x)
    {
        ll ld=x%10;
        if(ld == 9 && x/10 == 0)
        ans=ld*power(10,i)+ans;
        else if(ld == 9 && x/10 !=0)
        {
            ans=(9-ld)*power(10,i)+ans;
        }
        else if(ld >= 5)
        {
            ans=(9-ld)*power(10,i)+ans;
        }
        else
        {
            ans=ld*power(10,i)+ans;
        }
        i++;
        x/=10;
    }
    cout<<ans;
    return 0;
}