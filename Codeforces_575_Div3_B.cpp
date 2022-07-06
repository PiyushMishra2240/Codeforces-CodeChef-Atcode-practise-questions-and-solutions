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

    ll q;
    cin>>q;
    while (q--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        ll sum=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        vector<ll> in;
        for (ll i = 0; i < n; i++)
        {
            sum+=a[i];
            if(sum%2 == 1)
            {
                in.push_back(i+1);
                k--;
                sum=0;
            }
            if(k<=0)
            break;
        }
        if(k<=0)
        {
            sum=0;
            for (ll i = in[in.size()-1]-1; i < n; i++)
            {
                sum+=a[i];
            }
            if(sum%2 == 1 && sum > 0)
            {
                cout<<"YES\n";
                in[in.size()-1]=n;
                for (ll i = 0; i < in.size(); i++)
                {
                    cout<<in[i]<<" ";
                }
                cout<<"\n";
            }
            else
            cout<<"NO\n";
        }
        else
        cout<<"NO\n";
    }
    return 0;
}