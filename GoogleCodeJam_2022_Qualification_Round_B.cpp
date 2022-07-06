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
        vector<ll> a(4),b(4),c(4);
        for (ll i = 0; i < 4; i++)
        {
            cin>>a[i];
        }
        for (ll i = 0; i < 4; i++)
        {
            cin>>b[i];
        }
        for (ll i = 0; i < 4; i++)
        {
            cin>>c[i];
        }
        ll sum=0;
        vector<ll> ans;
        for (ll i = 0; i < 4; i++)
        {
            ll mi1=min(a[i],b[i]);
            ll mi=min(mi1,c[i]);
            if(sum+mi>1000000)
            {
                ll d=mi+sum-1000000;
                mi-=d;
                ans.push_back(mi);
                sum+=mi+d;
                break;
            }
            else
            {
                sum+=mi;
                ans.push_back(mi);
            }
        }
        if(sum>1000000)
        {
            while (ans.size() != 4)
            {
                ans.push_back(0);
            }
            for (ll i = 0; i < 4; i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<'\n';
        }
        else if(sum == 1000000)
        {
            for (ll i = 0; i < 4; i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<'\n';
        }
        else
        cout<<"IMPOSSIBLE\n";
    }
    return 0;
}