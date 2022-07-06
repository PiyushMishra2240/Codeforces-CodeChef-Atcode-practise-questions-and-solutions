#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll power(ll n, ll times)
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
    ll c=1;
    while (t--)
    {
        cout<<"Case #"<<c<<": ";
        c++;
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        ll sum=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll sq=0;
        for (ll i = 0; i < n; i++)
        {
            sq+=power(a[i],2);
        }
        // cout<<sq<<'\n';
        // cout<<sum*sum<<'\n';
        if(sq == sum*sum)cout<<"0\n";
        else
        {
            ll num=0;
            if(sum!=0)
            num=((sq-sum*sum))/(2*sum);
            if(sq+num*num == (sum+num)*(sum+num))cout<<num<<'\n';
            else cout<<"IMPOSSIBLE\n";
        }
    }
    return 0;
}