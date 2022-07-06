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
        ll a;
        cin>>a;
        if(ceil(1.0*360/(180-a)) == floor(1.0*360/(180-a)))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}