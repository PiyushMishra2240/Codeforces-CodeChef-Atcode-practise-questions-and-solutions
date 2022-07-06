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
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        ll g = arr[0];
        for (ll i = 1; i < n; i++)
        {
            g = __gcd(g,arr[i]);
        }
        if(g%2 != 0)
        {
            cout<<"0\n";
            continue;
        }
        ll op = 0;
        while (g%2 == 0)
        {
            g /= 2;
            ++op;
        }
        cout<<op<<"\n";        
        
    }
    return 0;
    
}