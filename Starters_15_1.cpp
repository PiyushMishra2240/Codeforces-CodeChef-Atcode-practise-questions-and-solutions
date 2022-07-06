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
        if(a <= 0 && b <= 0)
        {
            if(n%2 == 0)
            cout<<a<<'\n';
            else
            cout<<b<<'\n';
        }
        else if ( a < 0 && b > 0 )
        {
            ll p = 0;
            if(abs(b) > abs(a))
            {
                while(n != 1)
                {
                    if(n%2 == 0)
                    {
                        p += a;
                        n /= 2;
                    }
                    else
                    {
                        p += b;
                        cout<<p<<'\n';
                        break;
                    }
                }
            }
            else
            {
                if(n%2 == 0)
                {
                    n = n/2;
                    if(n%2 != 0)
                    {
                        cout<<a+b<<'\n';
                    }
                    else
                    {
                        cout<<a<<'\n';
                    }
                }
            }
        }
        else if( a > 0 && b < 0)
        {
            ll p = 0;
            if(n%2 != 0)
            {
                cout<<b<<'\n';
            }
            else
            {
                even:
                n = n/2;
                p += a;
                if(n%2 != 0)
                {
                    cout<<p+b<<'\n';
                }
                else
                {
                    while(n != 1)
                    goto even;
                }

                if(n == 1)
                cout<<p<<'\n';
            }
        }
        
    }
    
    return 0;
}