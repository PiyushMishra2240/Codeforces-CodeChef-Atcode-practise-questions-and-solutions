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
        ll n,k;
        cin>>n>>k;
        if(n%2==1 && k != 1)
        {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        ll cnt=1;
        for (ll i = 0; i < n; i++)
        {
            cnt=i+1;
            for (ll j = 0; j < k; j++)
            {
                cout<<cnt<<" ";
                cnt+=n;
            }
            cout<<'\n';
        }
        
    }
    return 0;
}