#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n],b[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        ll indexs=0,ones=0,indexe=0,f=0;
        priority_queue<ll,vector<ll>,greater<ll>> pq;
        for (ll i = 0; i < n; i++)
        {
           if(a[i] == 1)
           a[i]+=b[i];
           else if(a[i] != 1)
           {
               if(b[i] == 1)
                {
                    if(f == 0)
                    {
                        indexs = i;
                        pq.push(a[i]);
                        f=1;
                    }
                    else
                    {
                        indexe = i;
                        pq.push(a[i]);
                    }
                    ones++;
                }
                else if(b[i] != 1)
                a[i] *= b[i];
           }
        }
        while (ones)
        {
            ll temp = pq.top();
            temp++;
            ones--;
            pq.pop();
            pq.push(temp);
        }

        ll ans=1;
        for (ll i = indexs; i <= indexe; i++)
        {
            if(!pq.empty())
            a[i] = pq.top();
            else
            break;

            pq.pop();
        }
        for (ll i = 0; i < n; i++)
        {
            ans = ((ans%mod) * (a[i]%mod))%mod;
        }
        
        cout<<ans<<'\n';
    }
    return 0;
}