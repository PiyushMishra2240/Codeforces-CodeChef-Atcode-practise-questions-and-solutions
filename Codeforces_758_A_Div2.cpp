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
        if(n==1)
        cout<<"1\n";
        else
        {
            ll arr[n];
            ll j=1;
            for (ll i = 0; i < n; i++)
            {
                arr[i] = j+2;
                j+=2;
            }
            for (ll i = 0; i < n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<'\n';
            
        }
    }
       return 0;
}