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
        ll n,k;
        cin>>n>>k;
        if(ceil(1.0*n/2) < k)
        cout<<"-1\n";
        else
        {
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < n; j++)
                {
                    if(i == j && i%2 == 0 && j%2 == 0 && k > 0)
                    {
                        cout<<"R";
                        k--;
                    }
                    else
                    cout<<".";
                }
                cout<<'\n';
            }
        }
    }
    
    return 0;
}