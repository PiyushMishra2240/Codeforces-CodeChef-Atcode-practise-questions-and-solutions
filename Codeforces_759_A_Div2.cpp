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
        ll h = 1,f=0;
        if(arr[0] == 1)
        h++;
        for (ll i = 1; i < n; i++)
        {
            if(arr[i] == 1 && arr[i-1] == 1)
            {
                h+=5;
                continue;
            }
            if(arr[i] == 1)
            h++;
            if(arr[i] == 0 && arr[i-1] == 0)
            {
                f=1;
                cout<<"-1\n";
                break;
            }
        }
        
        if(f==0)
        cout<<h<<'\n';
        
    }
    
    return 0;
}