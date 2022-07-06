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
        ll a,b,c;
        cin>>a>>b>>c;
        ll n1 = (a+b)*c;
        ll n2 = a*(b+c);
        ll n3 = a*b +c;
        ll n4 = b*c +a;
        ll n5 = a*b*c;
        ll n6 = a + b + c;
        ll temp1 = max(n1,n2);
        ll temp2 = max(temp1,n3);
        ll temp3 = max(temp2,n4);
        ll temp4 = max(temp3,n5);
        ll ans = max(temp4,n6);
        cout<<ans<<'\n';
    }
    return 0;
}