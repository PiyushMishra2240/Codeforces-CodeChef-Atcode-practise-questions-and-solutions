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
        ll tt=n;
        ll tt2=n+1;
        ll sumn=0,sumn2=0;
        while (tt)
        {
            sumn+=tt%10;
            tt/=10;
        }
        while (tt2)
        {
            sumn2+=tt2%10;
            tt2/=10;
        }
        if(sumn%2 ^ sumn2%2)
        {
            cout<<n+1<<'\n';
        }
        else
        {
            cout<<n+2<<'\n';
        }
    }
    return 0;
}