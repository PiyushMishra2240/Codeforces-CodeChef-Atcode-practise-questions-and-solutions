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
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n);
        ll mx=INT_MIN,mi=INT_MAX;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>mx)mx=a[i];
            if(a[i]<mi)mi=a[i];
        }
        if(x<=mx && x>=mi)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}