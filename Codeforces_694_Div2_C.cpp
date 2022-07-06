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
        vector<ll> a(n),b(m);
        for(ll i=0;i<n;i++)cin>>a[i];
        for(ll i=0;i<m;i++)cin>>b[i];
        sort(a.begin(),a.end(),greater<ll>());
        ll cost=0;
        ll cnt=1;
        for(ll i=0; i<n ; i++){
            ll val=a[i];
            if(val>=cnt){
                cost+=b[cnt-1];
                cnt++;
            }
            else cost+=b[val-1];
        }
        cout<<cost<<'\n';
    }
}