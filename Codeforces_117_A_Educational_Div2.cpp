#include<bits/stdc++.h>
using namespace  std;
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
        ll x,y;
        cin>>x>>y;
        if((x+y)%2 == 0)
        {
            if(x >= y)
            {
                ll x1 = (x-y)/2;
                ll y1 = (x+y)/2 - x1;
                cout<<x1<<" "<<y1<<'\n';
            }
            else if(y > x)
            {
                ll y1 = (y-x)/2;
                ll x1 = (x+y)/2 - y1;
                cout<<x1<<" "<<y1<<'\n';
            }
            else if(x == 0 && y == 0)
            {
                cout<<"0 0\n";
            }

        }
        else
        {
            cout<<"-1 -1\n";
        }
    }
    return 0;
}