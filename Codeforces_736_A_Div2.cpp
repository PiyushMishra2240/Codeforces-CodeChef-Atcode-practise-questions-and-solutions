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
        ll p;
        cin>>p;
        if(p==5)
        cout<<2<<" "<<4<<"\n";
        else
        cout<<2<<" "<<p/2<<'\n';
    }
    return 0;
}