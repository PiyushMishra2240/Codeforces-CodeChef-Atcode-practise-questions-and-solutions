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
        priority_queue<ll> pq;
        ll sum1=0,sum2=0;
        for (ll i = 0; i < n; i++)
        {
            ll tt;
            cin>>tt;
            pq.push(tt);
        }
        while (pq.size()>2)
        {
            sum1+=pq.top();
            pq.pop();
            if(pq.size()<=2)
            break;
            sum2+=pq.top();
            pq.pop();
        }
        if(n%2 == 0)
        {
            sum1+=pq.top();
            pq.pop();
            sum1+=pq.top();
            pq.pop();
        }
        else
        {
            sum2+=pq.top();
            pq.pop();
            sum2+=pq.top();
            pq.pop();
        }
        cout<<max(sum1,sum2)<<'\n';
    }
    return 0;
}