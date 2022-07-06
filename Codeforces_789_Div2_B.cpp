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
        string s;
        cin>>s;
        ll cnt=1;
        ll ans=0;
        for (ll i = 1; i < n; i++)
        {
            if(s[i] == '1' && s[i-1] != s[i])
            {
                if(cnt%2==1)
                {
                    ans++;
                    cnt=0;
                }
                else cnt=1;
            }
            else if(s[i] == '0' && s[i-1] != s[i])
            {
                if(cnt%2==1)
                {
                    ans++;
                    cnt=0;
                }
                else cnt=1;
            }
            else cnt++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}