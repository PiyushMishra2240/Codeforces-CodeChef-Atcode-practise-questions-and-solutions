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
        ll temp;
        for(ll i = 1 ; i <= 1000 ; i++)
        {
            cout<<i*i<<'\n';
            fflush(stdout);
            cin>>temp;
            if(temp)
            break;
        }
        
    }
    return 0;
}