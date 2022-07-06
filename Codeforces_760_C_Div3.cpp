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
        ll n,o=0,e=0;
        cin>>n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        ll odd=arr[1],even=arr[0];
        for (ll i = 2; i < n; i+=2)
        {
            even = __gcd(arr[i],even);
        }
        for (ll i = 3; i < n; i+=2)
        {
            odd = __gcd(arr[i],odd);
        }
        for (ll i = 1; i < n; i+=2)
        {
            if(arr[i]%even == 0)
            {
                e=1;
                break;
            }
        }
        for (ll i = 0; i < n; i+=2)
        {
            if(arr[i]%odd == 0)
            {
                o=1;
                break;
            }
        }
        if(o == 1 && e == 1)
        cout<<"0\n";
        else if(o == 0 && e == 1)
        {
            cout<<odd<<'\n';
        }
        else if(o == 1 && e == 0)
        {
            cout<<even<<'\n';
        }
        else
        cout<<even<<'\n';
        
    }
 return 0;   
}