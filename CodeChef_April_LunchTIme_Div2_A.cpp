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
        ll ones=0,twos=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i] == 1)
            ones++;
            else if(a[i] == 2)
            twos++;
        }
        cout<<ones*(n-ones) + ones*(ones-1)/2 + (twos*(twos-1)/2)<<'\n';
    }
    return 0;
}