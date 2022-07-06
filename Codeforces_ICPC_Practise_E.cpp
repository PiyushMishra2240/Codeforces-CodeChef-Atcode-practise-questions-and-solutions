#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll power(ll n,ll times)
{
    ll ans=1;
    for (ll i = 0; i < times; i++)
    {
        ans*=n;
    }
    return ans;
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
        ll h,p;
        cin>>h>>p;
        ll cnt=0;
        ll rem=0;
        for (ll i = 0; i < h; i++)
        {
            ll temp=power(2,i);
            if(temp>=p)
            {
                cnt+=1;
                rem+=temp-p;
            }
            else
            cnt+=1;
        }
        cnt+=ceil(1.0*rem/p);
        cout<<cnt<<'\n';
    }
    return 0;
}