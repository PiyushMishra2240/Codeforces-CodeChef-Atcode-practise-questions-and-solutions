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
        if(k>n)
        {
            cout<<"NO\n";
            continue;
        }
        if((n-(k-1))%2==1)
        {
            cout<<"YES\n";
            for (ll i = 0; i < k-1; i++)
            {
                cout<<"1 ";
            }
            cout<<n-(k-1)<<"\n";
            continue;
        }
        if((n-2*(k-1))%2==0 && (n-2*(k-1)) > 0)
        {
            cout<<"YES\n";
            for (ll i = 0; i < k-1; i++)
            {
                cout<<"2 ";
            }
            cout<<n-2*(k-1)<<"\n";
            continue;
        }
        cout<<"NO\n";
    }
    return 0;
}