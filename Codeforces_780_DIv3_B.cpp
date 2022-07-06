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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        if(n == 1 && v[0] > 1)
        {
            cout<<"NO\n";
            continue;
        }
        else if(n == 1 && v[0] == 1)
        {
            cout<<"YES\n";
            continue;
        }
        sort(v.begin(),v.end());
        cout<<((v[n-1]-v[n-2] > 1)?"NO\n":"YES\n");
    }
    return 0;
}