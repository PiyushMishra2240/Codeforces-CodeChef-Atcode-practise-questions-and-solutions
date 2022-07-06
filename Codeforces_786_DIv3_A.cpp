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
        ll x,y;
        cin>>x>>y;
        if(y<x)cout<<"0 0\n";
        else if(y%x != 0)cout<<"0 0\n";
        else cout<<"1 "<<y/x<<'\n';
    }
    return 0;
}