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

    ll n,k,a;
    cin>>n>>k>>a;
    ll ans = (a+k-1)%n;
    if(ans == 0)
    cout<<n;
    else
    cout<<ans;
    return 0;
}