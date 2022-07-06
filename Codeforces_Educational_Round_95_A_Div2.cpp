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
        ll x,y,k,trades = 0;
        cin>>x>>y>>k;
        trades += (( k*(y+1)-1) / (x-1)) + k;
        float temp = (k*(y+1)-1)%(x-1);
        if( temp == 0)
        cout<<trades<<'\n';
        else
        cout<<trades +1<<'\n';
    }

    return 0;
}
