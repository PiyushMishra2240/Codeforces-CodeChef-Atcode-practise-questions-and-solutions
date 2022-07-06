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
        ll n,a,b;
        cin>>n>>a>>b;
        ll temp = n;
        ll even = 0, odd = 0;
                for (ll i = 2; i*i <= n; i++)
                {
                    while(n%i == 0)
                    {
                        n = n/i;
                        if(i%2 == 0)
                        even++;
                        else
                        odd++;
                    }
                }
                if(n>1)
                {
                    if(n%2 == 0)
                    even++;
                    else
                    odd++;
                }

        if(a < 0 && b < 0)
        {
            if(temp%2 == 0)
            cout<<a<<'\n';
            else
            cout<<b<<'\n';
        }

        else if( a < 0 && b >= 0)
        {
           if(even != 0)
           cout<<odd*b + a<<'\n';
           else
           cout<<odd*b<<'\n';
        }
        else if( a >= 0 && b < 0)
        {
            if(even > 0)
            {
            cout<<even*a<<'\n';
            }
            else
            cout<<b<<'\n';
        }
        else if( a >= 0 && b >= 0)
        {
            cout<<even*a + odd*b<<'\n';
        }
    }
    return 0;
}