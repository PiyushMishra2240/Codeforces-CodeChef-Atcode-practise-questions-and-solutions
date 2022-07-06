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
        ll c1=b+(b-a);
        ll a1=b+(b-c);
        ll b1=a+(c-a)/2;
        if(c1 >= c && c1%c == 0 && c1 != 0)
        {
            cout<<"YES\n";
            continue;
        }
        if(a1 >= a && a1%a == 0 && a1 != 0)
        {
            cout<<"YES\n";
            continue;
        }
        if(b1 >= b && b1%b == 0 && (c-a)%2 == 0 && b1 != 0)
        {
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";
    }
    return 0;
}