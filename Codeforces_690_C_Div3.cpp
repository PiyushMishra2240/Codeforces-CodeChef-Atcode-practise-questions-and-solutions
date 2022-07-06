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
        ll x,i=9;
        cin>>x;
        if(x > 45)
        cout<<"-1\n";
        else
        {
            vector<ll> v;
            while (x>0)
            {
                if(x-i >= 0)
                x -= i;
                else 
                break;
                v.push_back(i);
                i--;
            }
            if(x != 0)
            v.push_back(x);
            reverse(v.begin(),v.end());
            for (ll i = 0; i < v.size(); i++)
            {
                cout<<v[i];
            }
        }
        cout<<'\n';
    }
    return 0;
}