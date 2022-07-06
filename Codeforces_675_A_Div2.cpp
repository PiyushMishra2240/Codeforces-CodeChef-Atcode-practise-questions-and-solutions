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
        ll a,b,c;
        ll min = INT_MAX;
        cin>>a;
        if(a<min)
        min = a;
        cin>>b;
        if(b<min)
        min = b;
        cin>>c;
        if(c<min)
        min = c;
        cout<<abs(a+b+c - 2*min)<<"\n";
    }
    return 0;   
}