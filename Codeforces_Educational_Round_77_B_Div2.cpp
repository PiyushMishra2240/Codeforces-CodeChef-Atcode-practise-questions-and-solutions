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
        ll a,b;
        cin>>a>>b;
        if((a+b)%3 == 0)
        {
            if(a<=b)
            {
                if(2*a>=b)
                cout<<"YES\n";
                else
                cout<<"NO\n";
            }
            else if(b<=a)
            {
                if(2*b>=a)
                cout<<"YES\n";
                else
                cout<<"NO\n";
            }
        }
        else
        cout<<"NO\n";
    }
    return 0;
}