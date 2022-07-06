#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

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
        ll sum=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll cnt=0;
        while((cnt*(cnt+1))/2 <= sum)
        cnt++;
        cout<<cnt-1<<'\n';
    }
    return 0;
}