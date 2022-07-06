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
        vector<ll> a(n);
        ll even=0,odd=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)even++;
            else odd++;
        }
        if((even == 0 && odd == n) || (odd == 0 && even == n))
        {
            cout<<"0\n";
            continue;
        }
        if(odd%2 == 1)cout<<even<<'\n';
        else cout<<min(odd/2,even)<<'\n';
    }
    return 0;
}