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
    while(t--)
    {
        ll n;
        cin>>n;
        ll mx=n/4;
        ll mi=n/6;
        if(n%2 || n<4)cout<<"-1\n";
        else
        {
            if(n%6)mi++;
            cout<<mi<<" "<<mx<<'\n';
        }
    }
    return 0;
}