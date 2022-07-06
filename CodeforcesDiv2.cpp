#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,h,flag = 1,count = 0;
        cin>>n>>h;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        sort(arr,arr+n);
       while(h > 0)
       {
           if(flag == 1)
           {
               h -= arr[n-1];
               flag = 0;
               ++count;
           }
           else
           {
               h -= arr[n-2];
               flag = 1;
               ++count;
           }
       }
        cout<<count<<"\n";
    }
    return 0;
}
