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
        ll n;
        cin>>n;
        ll d=n%10;
        n/=10;
        d%=2;
        ll f=0;
        while (n)
        {
            if((n%10)%2 == d)
            {
                cout<<"YES\n";
                f=1;
                break;
            }
            n/=10;
        }
        if(f==0)cout<<"NO\n";
    }
    return 0;
}