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

    ll a,b,f=0;
    cin>>a>>b;
    if(a >= b)
    {
        while (b)
        {
            ll b1 = b%10;
            ll a1 = a%10;
            if(a1 + b1 > 9)
            {
                f=1;
                cout<<"Hard";
                break;
            }
            b /= 10;
            a /= 10;
        }
        if(f == 0)
        {
            cout<<"Easy";
        }
    }
    else
    {
         while (a)
        {
            ll b1 = b%10;
            ll a1 = a%10;
            if(a1 + b1 > 9)
            {
                f=1;
                cout<<"Hard";
                break;
            }
            b /= 10;
            a /= 10;
        }
        if(f == 0)
        {
            cout<<"Easy";
        }
    }
    return 0;
}