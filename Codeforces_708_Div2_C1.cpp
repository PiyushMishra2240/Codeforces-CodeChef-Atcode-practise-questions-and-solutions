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
        ll n,k;
        cin>>n>>k;
        if(n%2==0)
        {
           if(n%4 == 0)
           {
               cout<<n/4<<" "<<n/4<<" "<<n/2<<'\n';
           }
           else
           {
               cout<<n/2-1<<" "<<n/2-1<<" "<<"2\n";
           }
        }
        else
        {
            cout<<n/2<<" "<<n/2<<" "<<"1\n";
        }
    }
    return 0;
}