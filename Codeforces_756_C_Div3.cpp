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
        deque<ll> d;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        d.push_back(arr[0]);
        if(n > 3)
        {
             ll i = 1 , j = n-1,f=0;
             while(i <= j)
            {
                if(arr[i] <= arr[j])
                {
                    if(i!=j)
                    {
                        d.push_front(arr[i]);
                        d.push_back(arr[j]);
                    }
                    else
                    d.push_back(arr[i]);

                    i++;
                    j--;
                }
                else
                {
                    f=1;
                    cout<<"-1\n";
                    break;
                }
            }
            if(f==0)
            {
                for (ll i = 0; i < n; i++)
                {
                    cout<<d[i]<<" ";
                }
                cout<<'\n';
            }
        }
        else
        {
            ll i = 1 , j = n-1,f=0;
             while(i <= j)
                {
                    d.push_front(arr[i]);
                    d.push_back(arr[j]);
                    i++;
                    j--;
                }
            
                for (ll i = 0; i < n; i++)
                {
                    cout<<d[i]<<" ";
                }
                cout<<'\n';
        }
        
    }
    return 0;
}