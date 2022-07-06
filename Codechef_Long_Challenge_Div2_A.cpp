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
        vector<ll> v(4);
        cin>>v[0]>>v[1]>>v[2]>>v[3];
        sort(v.begin(),v.end());
        ll a=-1,b=-1;
        ll p=v[3],s=v[2],d;
        if(v[0] == 0 && v[1] == 1 && v[2] == 1 && v[3] == 2)
        {
            cout<<"1 1\n";
            continue;
        }
        if(v[0] < 0 && v[1] < 0)
        {
            cout<<"-1 -1\n";
            continue;
        }
        if(v[0] == 0 && v[1] == 0)
        {
            cout<<"-1 -1\n";
            continue;
        }
        if(v[0] <= 0)
        {
            d=v[0];
            if((s+d)%2 == 0 && s+d > 0)
            {
                a=(s+d)/2;
                if(p%a == 0)
                {
                    b=p/a;
                }
                else
                {
                    cout<<"-1 -1\n";
                    continue;
                }
            }
            else
            {
                cout<<"-1 -1\n";
                continue;
            }
        }
        else if(v[0] > 0)
        {
            d=v[1];
            if((s+d)%2 == 0 && s+d > 0)
            {
                a=(s+d)/2;
                if(p%a == 0)
                {
                    b=p/a;
                }
                else
                {
                    cout<<"-1 -1\n";
                    continue;
                }
            }
            else
            {
                cout<<"-1 -1\n";
                continue;
            }
        }
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}