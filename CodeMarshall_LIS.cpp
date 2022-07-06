#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll c;
        cin>>c;
        if(c > 200)
        {
            cout<<"-1\n";
            continue;
        }
        cout<<c<<'\n';
        for (ll i = c; i >= 1; i--)
        {
            cout<<i<<" ";
        }
        cout<<'\n';
    }
    return 0;
}