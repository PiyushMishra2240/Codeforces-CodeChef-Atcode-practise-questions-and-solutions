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

    ll n,L,a;
    cin>>n>>L>>a;
    ll start = 0,ans=0;
    while (n--)
    {
        ll l,t;
        cin>>l>>t;
        ans += (l-start)/a;
        start = l+t;
    }
    ans += (L-start)/a;
    cout<<ans;
    return 0;
}