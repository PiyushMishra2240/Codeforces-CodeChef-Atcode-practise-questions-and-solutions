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
    ll k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    if(k==1 || l==1 || m==1)
    cout<<d;
    else
    cout<<(d/k + d/l +d/m + d/n) - (d/(k*l) + d/(k*m) + d/(k*n) + d/(l*m) + d/(l*n) + d/(m*n)) - (d/(k*l*m) + d/(k*l*n) + d/(l*m*n)) + (d/(k*l*n*m));
    return 0;
}