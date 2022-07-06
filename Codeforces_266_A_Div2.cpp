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

    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    ll ans=0;
    while(n>=m)
    {
        n-=m;
        ans+=min(a*m,b);
    }
    ans+=min(a*n,b);
    cout<<ans;
    return 0; 
}