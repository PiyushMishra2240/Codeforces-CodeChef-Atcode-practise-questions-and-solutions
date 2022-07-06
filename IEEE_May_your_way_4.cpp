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

    ll n;
    cin>>n;
    deque<ll> d;
    ll sum=0;
    for (ll i = 0; i < n; i++)
    {
        ll tt;
        cin>>tt;
        d.push_back(tt);
        sum+=tt;
    }
    ll c1=0,c2=0;
    while (!d.empty())
    {
        if(sum-d.back() <= sum-d.front())
        {
            c1+=sum-d.back();
            sum-=d.back();
            d.pop_back();
            c2+=sum-d.front();
            sum-=d.front();
            d.pop_front();
        }
        else
        {
            c1+=sum-d.front();
            sum-=d.front();
            d.pop_front();
            c2+=sum-d.back();
            sum-=d.back();
            d.pop_back();
        }
    }
    cout<<abs(c1-c2);
    return 0;
}