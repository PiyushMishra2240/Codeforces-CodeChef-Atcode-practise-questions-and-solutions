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
        cout<<n<<" ";
        for (ll i = 1; i <= n-1; i++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}