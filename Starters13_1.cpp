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

    ll t,a,b,c,x,y,p;
    cin>>t;

    while (t--)
    {
        cin>>p>>a>>b>>c>>x>>y;
        ll s1 = c + y*a;
        ll s2 = b + x*a;
        cout<<p/min(s1,s2)<<"\n";
    }
    return 0;
}