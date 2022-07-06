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
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end(),greater<ll>());
        ll ans=a[0]*2;
        if(n>1){
            ll pos=n-1;
            for(ll i=1;i<n;i++){
                if(a[i]!=a[0]){
                    pos=i;
                    break;
                }
            }
            ll tt=a[0] + a[pos] + (m-((a[0]-a[pos])%m))%m;
            ans=max(ans,tt);
        }
        cout<<ans<<'\n';
    }
    return 0;
}