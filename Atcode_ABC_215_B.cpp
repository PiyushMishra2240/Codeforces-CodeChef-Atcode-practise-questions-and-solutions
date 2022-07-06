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

    ll n;
    cin>>n;
    ll ans=1;
    ll k=0;
    while (ans <= n)
    {
        ans*=2;
        if(ans >= n)
        break;
        k++;
    }
    cout<<k;
    return 0;
}