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
        ll x1,x2;
        ll p1,p2;
        cin>>x1>>p1>>x2>>p2;
        ll mi = min(p1,p2);
        p1-=mi;
        p2-=mi;
        if(p1>7)
        cout<<">\n";
        else if(p2>7)
        cout<<"<\n";
        else
        {
            for (ll i = 0; i < p1; i++)
            {
                x1*=10;
            }
            for (ll i = 0; i < p2; i++)
            {
                x2*=10;
            }
            if(x1>x2)
            cout<<">\n";
            else if(x1<x2)
            cout<<"<\n";
            else
            cout<<"=\n";
        }
    }
    return 0;
}