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

    ll n,m;
    cin>>n>>m;
    vector<ll> a(m);
    for (ll i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    priority_queue<ll> mx;
    priority_queue<ll,vector<ll>,greater<ll>> mi;
    for (ll i = 0; i < m; i++)
    {
        mx.push(a[i]);
        mi.push(a[i]);
    }
    ll ansmx=0,ansmi=0;
    // while(!mx.empty())
    // {
    //     cout<<mx.top()<<" ";
    //     mx.pop();
    // }
    ll nn=n;
    while (nn>0 && !mx.empty())
    {
        ll tt=mx.top();
        mx.pop();
        ansmx+=tt;
        nn--;
        tt-=1;
        if(tt!=0)mx.push(tt);
    }
    nn=n;
    // while (!mi.empty())
    // {
    //     cout<<mi.top()<<" ";
    //     mi.pop();
    // }
    
    while(nn>0 && !mi.empty())
    {
        ll tt=mi.top();
        mi.pop();
        ansmi+=tt;
        nn--;
        tt-=1;
        if(tt!=0)mi.push(tt);
    }
    cout<<ansmx<<" "<<ansmi;
    return 0;
}