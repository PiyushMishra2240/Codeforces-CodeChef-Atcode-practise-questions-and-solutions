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
    ll c=1;
    while (t--)
    {
        cout<<"Case #"<<c<<": ";
        c++;
        ll n;
        cin>>n;
        deque<ll> d(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>d[i];
        }
        priority_queue <ll> pq;
        ll cnt=0;
        while(!d.empty())
        {
            if(pq.empty())
            {
                cnt++;
                if(d.front()<=d.back())
                {
                    pq.push(d.front());
                    d.pop_front();
                }
                else
                {
                    pq.push(d.back());
                    d.pop_back();
                }
            }
            else
            {
                if(d.front()<=d.back())
                {
                    if(d.front()>=pq.top())
                    cnt++;
                    pq.push(d.front());
                    d.pop_front();
                }
                else if(d.back()<=d.front())
                {
                    if(d.back()>=pq.top())
                    cnt++;
                    pq.push(d.back());
                    d.pop_back();
                }
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}