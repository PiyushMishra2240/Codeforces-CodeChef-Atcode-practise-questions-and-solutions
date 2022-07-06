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
        char c;
        string s;
        cin>>n>>c>>s;
        ll count=0;
        for (ll i = 0; i < n; i++)
        {
            if(s[i] != c)
            count++;
        }
        if(count == 0)
        cout<<"0\n";
        else 
        {
            ll f=0;
            for (ll i = n; i > n/2; i--)
            {
                if(s[i-1] == c)
                {
                    f=1;
                    cout<<"1\n"<<i<<'\n';
                    break;
                }
            }
            if(f==0)
            {
                cout<<"2\n"<<n<<" "<<n-1<<'\n';
            }
        }
    }
    return 0;
}