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
        string a,b;
        cin>>a>>b;
        bool BB = b[n-1] > a[n-1];
        ll ans = 0;
        if(BB)
        ans++;
        for (ll i = n-2; i >= 0; i--)
        {
            if(b[i] > a[i])
            {
                BB = true;
                ans++;
            }
            else if(b[i] < a[i])
            BB = false;
            else
            {
                if(BB)
                ans++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}