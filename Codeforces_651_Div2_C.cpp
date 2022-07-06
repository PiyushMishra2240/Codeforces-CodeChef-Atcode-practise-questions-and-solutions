#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll count(ll num)
{
    ll c=0;
    for (ll i = 3; i <= sqrt(num); i+=2)
    {
        while(num%i == 0)
        {
            c++;
            num/=i;
        }
    }
    return c;
}

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
        if(n==1)
        {
            cout<<"FastestFinger\n";
            continue;
        }
        if(n%2 == 1)
        {
            cout<<"Ashishgup\n";
            continue;
        }
        if(ceil(log2(n)) == floor(log2(n)))
        {
            if(n != 2)
            {
                cout<<"FastestFinger\n";
                continue;
            }
            else
            {
                cout<<"Ashishgup\n";
                continue;
            }
        }
        else if(n%2 == 0)
        {
            ll even=0;
            while(n%2==0)
            {
                even++;
                n/=2;
                if(even>1)
                break;
            }
            if(even == 1 && count(n) == 0)
            cout<<"FastestFinger\n";
            else
            cout<<"Ashishgup\n";
        }
    }
    return 0;
}