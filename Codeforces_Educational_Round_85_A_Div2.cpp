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
        ll plays[n],clears[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>plays[i];
            cin>>clears[i];
        }
        ll f=0;
        if(n==1)
        {
            if(clears[0]>plays[0])
            {
                cout<<"NO\n";
                continue;
            }
            else
            {
                cout<<"YES\n";
                continue;
            }
        }
        for (ll i = 0; i < n-1; i++)
        {
            ll dp=plays[i+1]-plays[i];
            ll dc=clears[i+1]-clears[i];
            if(dp >= 0 && dc >= 0)
            {
                if(dp<dc || clears[i] > plays[i])
                {
                    cout<<"NO\n";
                    f=1;
                    break;
                }
            }
            else
            {
                cout<<"NO\n";
                f=1;
                break;
            }
        }
        if(f==0)
        cout<<"YES\n";
    }
    return 0;
}