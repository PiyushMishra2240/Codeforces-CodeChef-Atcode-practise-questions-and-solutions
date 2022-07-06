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
        string s;
        cin>>s;
        ll n = s.length();
        if(n%2 != 0)
        cout<<"No\n";
        else
        {
            ll f=0;
            string x="";
            for (ll i = 0; i < n/2; i++)
            {
                x+=s[i];
            }
            // cout<<x<<' ';
            for (ll i = n/2,j=0; i < n; i++,j++)
            {
                if(x[j]!=s[i])
                {
                    cout<<"No\n";
                    f=1;
                    break;
                }
            }
            if(f==0)
            cout<<"Yes\n";
        }
    }
    return 0;
}