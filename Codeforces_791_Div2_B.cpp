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

    ll n,q;
    cin>>n>>q;
    vector<ll> a(n);
    ll sum=0,lst=INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    map<ll,ll> m;
    for(ll i=0;i<q;i++)
    {
        ll c,x,temp;
        cin>>c;
        if(c==1)
        {
            ll pos;
            cin>>pos>>x;
            if(lst > i)
            {
                sum-=a[pos-1];
                sum+=x;
                a[pos-1]=x;
                cout<<sum<<'\n';
            }
            else
            {
                auto itr=m.find(pos);
                if(itr != m.end())
                {
                    sum-=itr->second;
                    sum+=x;
                    itr->second=x;
                    a[pos-1]=x;
                    cout<<sum<<'\n';                    
                }
                else
                {
                    sum-=temp;
                    sum+=x;
                    a[pos-1]=x;
                    m[pos]=x;
                    cout<<sum<<'\n';
                }
            }
        }
        else
        {
            cin>>x;
            temp=x;
            lst=i;
            sum=n*x;
            m.clear();
            cout<<sum<<'\n';
        }
    }
    return 0;
}