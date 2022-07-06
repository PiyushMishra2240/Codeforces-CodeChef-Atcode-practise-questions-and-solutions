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
        ll sum=0,te;
        for (ll i = 0; i < 2*n; i++)
        {
            cin>>te;
            sum+=te;
        }
        if(sum%2==0)
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
    return 0;
}