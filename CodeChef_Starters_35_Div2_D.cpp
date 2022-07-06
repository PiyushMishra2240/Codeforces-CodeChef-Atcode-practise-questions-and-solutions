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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        vector<ll> o,e;
        for (ll i = 0; i < n; i++)
        {
            if(a[i]%2==0)e.push_back(i);
            else o.push_back(i);
        }
        if(o.size() == n || e.size() == n)
        {
            cout<<n-1<<'\n';
            continue;
        }

        ll cnt=0;
        if(a[0]%2==1)
        {
            if(o[o.size()-1] == n-1 && o.size() == 2)cout<<"1\n";
            else 
            {
                if(o[o.size()-1]<e[0])
                cnt+=min(e.size(),o.size());
                else
                {
                    if(a[n-1]%2 == 1)
                    {
                        cnt+=o.size()-1;
                    }
                    else
                    cnt+=min(o.size(),e.size());
                }
                cout<<cnt<<'\n';

            }
        }
        else
        {
            if(e[e.size()-1] == n-1 && e.size() == 2)cout<<"1\n";
            else 
            {
                if(e[e.size()-1]<o[0])
                cnt+=min(o.size(),e.size());
                else
                {
                    if(a[n-1]%2 == 0)
                    cnt+=e.size()-1;
                    else
                    cnt+=min(o.size(),e.size());
                }
                cout<<cnt<<'\n';

            }
        }
    }
    return 0;
}