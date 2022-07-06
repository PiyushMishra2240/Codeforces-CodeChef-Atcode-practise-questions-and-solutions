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
        ll x;
        cin>>x;
        ll ans=0;
        while (x>0)
        {
            ans++;
            x-=ans;
        }
        if(x==-1)
        ans++;
        cout<<ans<<'\n';
    }
    return 0;
}