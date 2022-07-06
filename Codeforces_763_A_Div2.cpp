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
        ll n,m,rb,cb,rd,cd,f=0,g=0;
        cin>>n>>m>>rb>>cb>>rd>>cd;
        ll ans=0;
        while(rb != rd && cb != cd)
        {
            rb++;
            cb++;
            ans++;
            if(n-rb%n == rd && rb > n)
            break;
            if(m-cb%m == cd && cb > m)
            break;
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}